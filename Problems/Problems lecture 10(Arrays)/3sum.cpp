vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
    vector<vector<int>> v;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 2; i++)
    {
        int sum = arr[i];
        int l = i + 1, r = n - 1;
        while (l < r)
        {
            if ((sum + arr[l] + arr[r]) == K)
            {
                int x = arr[l];
                int y = arr[r];
                v.push_back({sum, arr[l], arr[r]});
                while (l < r && arr[l] == x)
                {
                    l++;
                }
                while (l < r && arr[r] == y)
                {
                    r--;
                }
            }
            else if ((sum + arr[l] + arr[r]) > K)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        while (i + 1 < n && arr[i] == arr[i + 1])
        {
            i++;
        }
    }
    return v;
}