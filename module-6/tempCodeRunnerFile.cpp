  Cricketer *fuad = new Cricketer("Bangladesh", 40);
    Cricketer *saad = new Cricketer("Japan", 50);

    // saad->country = fuad->country;
    // saad->jersey = fuad->jersey;
    *saad = *fuad;
    delete fuad;

    // cout << fuad->country << fuad->jersey << endl;
    cout << saad->country << saad->jersey << endl;

    return 0;