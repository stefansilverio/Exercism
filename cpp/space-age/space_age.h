#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {

	class space_age
	{

	private:
		long long current_secs;
		double current_age_in_earth_years;

		static constexpr double EARTH_YEAR_IN_SECONDS = 31557600;
		static constexpr double MERCURY_ORBITAL_PERIOD = 0.2408467;
		static constexpr double VENUS_ORBITAL_PERIOD = 0.61519726;
		static constexpr double MARS_ORBITAL_PERIOD = 1.8808158;
		static constexpr double JUPITER_ORBITAL_PERIOD = 11.862615;
		static constexpr double SATURN_ORBITAL_PERIOD = 29.447498; 	
		static constexpr double URANUS_ORBITAL_PERIOD = 84.016846;
		static constexpr double NEPTUNE_ORBITAL_PERIOD = 164.79132;

	public:
		space_age(long long seconds);
		long long seconds() const;

		double on_earth() const;
		double on_mercury() const;
		double on_venus() const;
		double on_mars() const;
		double on_jupiter() const;
		double on_saturn() const;
		double on_uranus() const;
		double on_neptune() const;
	};

}  // namespace space_age

#endif // SPACE_AGE_H
