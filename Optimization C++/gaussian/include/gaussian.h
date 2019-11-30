#ifndef GAUSSIAN_H
#define GAUSSIAN_H
class Gaussian
{
	private:
		float mu, sigma2;

	public:

		// constructor functions
		Gaussian ();
		Gaussian (float, float);

		// changes value of average and standard deviation
		void setMu(float);
		void setSigma2(float);

		// outputs value of average and standard deviation
		float getMu();
		float getSigma2();

		// class methods
		float evaluate (float);
		Gaussian mul (Gaussian);
		Gaussian add (Gaussian);
};
#endif /* GAUSSIAN_H */
