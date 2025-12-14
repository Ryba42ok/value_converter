double to_the_usd(double valute, double money)
{
	double kof;
	
	kof = 1.0 / valute;

	return (money*kof);
}