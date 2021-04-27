#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class ISquad
{
public:
	virtual	~ISquad() {}
	virtual int	getCount() const = 0; // 현재 스쿼드의 유닛 수를 반환
	virtual ISpaceMarine	*getUnit(int) const = 0; // N번째 유닛의 포인터를 반환 (0부터 시작 범위 벗어날 경우 NULL)
	virtual int	push(ISpaceMarine*) = 0; // 스쿼드의 마지막에 유닛 XXX를 추가하기. 그 후 스쿼드의 유닛 수를 반환. 유닛이 null이거나 이미 스쿼드에 있는 유닛일 경우에는 아무것도 하지 않음.
};

#endif
