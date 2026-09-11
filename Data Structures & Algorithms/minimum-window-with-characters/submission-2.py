class Solution:
    def minWindow(self, s: str, t: str) -> str:

        res = ""
        reslength = float('inf')

        freqt = {}
        freqs = {}

        for c in t:
            freqt[c] = freqt.get(c, 0) + 1

        l = 0
        have = 0
        need = len(freqt)

        for r, c in enumerate(s):

            if c in freqt:
                freqs[c] = freqs.get(c, 0) + 1

                if freqs[c] == freqt[c]:
                    have += 1

            while have == need:

                if r - l + 1 < reslength:
                    res = s[l:r + 1]
                    reslength = r - l + 1

                if s[l] in freqt:
                    freqs[s[l]] -= 1

                    if freqs[s[l]] < freqt[s[l]]:
                        have -= 1

                l += 1

        return res