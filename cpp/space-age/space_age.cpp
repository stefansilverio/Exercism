#include "space_age.h"

namespace space_age {
	space_age::space_age(long long seconds)
	{
		current_age_in_earth_years = seconds / EARTH_YEAR_IN_SECONDS;
		current_secs = seconds;
	}

	long long space_age::seconds() const
	{
		return current_secs;
	}

	double space_age::on_earth() const
	{
		return current_age_in_earth_years;
	}

	double space_age::on_mercury() const
	{
		return current_age_in_earth_years / MERCURY_ORBITAL_PERIOD;
	} // do I need these semi-colons?

	double space_age::on_venus() const
	{
		return current_age_in_earth_years / VENUS_ORBITAL_PERIOD;
	}

	double space_age::on_mars() const
	{
		return current_age_in_earth_years / MARS_ORBITAL_PERIOD;
	}

	double space_age::on_jupiter() const
	{
		return current_age_in_earth_years / JUPITER_ORBITAL_PERIOD;
	}

	double space_age::on_saturn() const
	{
		return current_age_in_earth_years / SATURN_ORBITAL_PERIOD;
	}

	double space_age::on_uranus() const
	{
		return current_age_in_earth_years / URANUS_ORBITAL_PERIOD;
	}

	double space_age::on_neptune() const
	{
		return current_age_in_earth_years / NEPTUNE_ORBITAL_PERIOD;
	}
		
}  // namespace space_age
