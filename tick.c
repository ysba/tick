tick_t tick_count = 0;

bool tick_compare(tick_t val) {

    if((signed)(tick_t)(val - tick_count) <= (signed)(tick_t)(0))
        return true;
    else
        return false;
}
