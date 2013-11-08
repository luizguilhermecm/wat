#include "fft.h"
#include <math.h>
#include <stdlib.h>
#define PI	M_PI
#define TWOPI	(2.0*PI)

#define FIS 32 

#define FIS_V2 1 

/*
 * FISSION
 *
 */
 
void fission_fft(double data[], int nn, int isign)
{
        printf("\n\t\t\t\t\tFISSION");
        int n, mmax, m, j, istep, i;
        double wtemp, wr, wpr, wpi, wi, theta;
        double tempr, tempi;

        n = nn << 1;
        j = 1;
        for (i = 1; i < n; i += 2) {
                if (j > i) {
                        tempr = data[j];     
                        data[j] = data[i];     
                        data[i] = tempr;
                        
                        tempr = data[j+1]; 
                        data[j+1] = data[i+1]; 
                        data[i+1] = tempr;
                }
                m = n >> 1;
                while (m >= 2 && j > m) {
                        j -= m;
                        m >>= 1;
                }
                j += m;
        }
        mmax = 2;

        while (1 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (2 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (3 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (4 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (5 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (6 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (7 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (8 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (9 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (10 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (11 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (12 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (13 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (14 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (15 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (16 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (17 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (18 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (19 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }


        while (20 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (21 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (22 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (23 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (24 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (25 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (26 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (27 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (28 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (29 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (30 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (31 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

        while (32 * (n/FIS) > mmax) {
                istep = 2*mmax;
                theta = TWOPI/(isign*mmax);
                wtemp = sin(0.5*theta);
                wpr = -2.0*wtemp*wtemp;
                wpi = sin(theta);
                wr = 1.0;
                wi = 0.0;
                for (m = 1; m < mmax; m += 2) {
                        for (i = m; i <= n; i += istep) {
                                j =i + mmax;
                                tempr = wr*data[j]   - wi*data[j+1];
                                tempi = wr*data[j+1] + wi*data[j];
                                data[j]   = data[i]   - tempr;
                                data[j+1] = data[i+1] - tempi;
                                data[i] += tempr;
                                data[i+1] += tempi;
                        }
                        wr = (wtemp = wr)*wpr - wi*wpi + wr;
                        wi = wi*wpr + wtemp*wpi + wi;
                }
                mmax = istep;
        }

}
