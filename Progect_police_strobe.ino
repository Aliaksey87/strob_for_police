#include <EEPROM.h>
bool _gen39I = 0;
bool _gen39O = 0;
unsigned long _gen39P = 0UL;
bool _bounseInputD15S = 0;
bool _bounseInputD15O = 0;
unsigned long _bounseInputD15P = 0UL;
bool _trgt3 = 0;
bool _trgt3I = 0;
bool _gen17I = 0;
bool _gen17O = 0;
unsigned long _gen17P = 0UL;
bool _gen19I = 0;
bool _gen19O = 0;
unsigned long _gen19P = 0UL;
bool _trgt4 = 0;
bool _trgt4I = 0;
bool _gen21I = 0;
bool _gen21O = 0;
unsigned long _gen21P = 0UL;
bool _gen29I = 0;
bool _gen29O = 0;
unsigned long _gen29P = 0UL;
bool _gen10I = 0;
bool _gen10O = 0;
unsigned long _gen10P = 0UL;
bool _gen37I = 0;
bool _gen37O = 0;
unsigned long _gen37P = 0UL;
bool _bounseInputD16S = 0;
bool _bounseInputD16O = 0;
unsigned long _bounseInputD16P = 0UL;
bool _gen16I = 0;
bool _gen16O = 0;
unsigned long _gen16P = 0UL;
bool _bounseInputD14S = 0;
bool _bounseInputD14O = 0;
unsigned long _bounseInputD14P = 0UL;
bool _trgt12 = 0;
bool _trgt12I = 0;
bool _gen5I = 0;
bool _gen5O = 0;
unsigned long _gen5P = 0UL;
bool _trgt2 = 0;
bool _trgt2I = 0;
bool _trgt11 = 0;
bool _trgt11I = 0;
bool _gen30I = 0;
bool _gen30O = 0;
unsigned long _gen30P = 0UL;
bool _trgt7 = 0;
bool _trgt7I = 0;
bool _gen20I = 0;
bool _gen20O = 0;
unsigned long _gen20P = 0UL;
bool _gen2I = 0;
bool _gen2O = 0;
unsigned long _gen2P = 0UL;
bool _gen26I = 0;
bool _gen26O = 0;
unsigned long _gen26P = 0UL;
bool _gen15I = 0;
bool _gen15O = 0;
unsigned long _gen15P = 0UL;
bool _gen22I = 0;
bool _gen22O = 0;
unsigned long _gen22P = 0UL;
bool _gen41I = 0;
bool _gen41O = 0;
unsigned long _gen41P = 0UL;
bool _gen6I = 0;
bool _gen6O = 0;
unsigned long _gen6P = 0UL;
bool _gen27I = 0;
bool _gen27O = 0;
unsigned long _gen27P = 0UL;
bool _gen4I = 0;
bool _gen4O = 0;
unsigned long _gen4P = 0UL;
bool _trgt5 = 0;
bool _trgt5I = 0;
bool _gen40I = 0;
bool _gen40O = 0;
unsigned long _gen40P = 0UL;
bool _dms4Q0 = 0;
bool _dms4Q1 = 0;
bool _dms4Q2 = 0;
bool _dms4Q3 = 0;
bool _dms4Q4 = 0;
bool _dms4Q5 = 0;
bool _trgt10 = 0;
bool _trgt10I = 0;
bool _SEEPR2OSN = 0;
bool _gen13I = 0;
bool _gen13O = 0;
unsigned long _gen13P = 0UL;
bool _dms5Q0 = 0;
bool _dms5Q1 = 0;
bool _dms5Q2 = 0;
bool _dms5Q3 = 0;
bool _dms5Q4 = 0;
bool _dms5Q5 = 0;
bool _dms5Q6 = 0;
bool _dms5Q7 = 0;
bool _dms5Q8 = 0;
bool _dms5Q9 = 0;
bool _gen7I = 0;
bool _gen7O = 0;
unsigned long _gen7P = 0UL;
bool _gen28I = 0;
bool _gen28O = 0;
unsigned long _gen28P = 0UL;
bool _gen9I = 0;
bool _gen9O = 0;
unsigned long _gen9P = 0UL;
bool _gen31I = 0;
bool _gen31O = 0;
unsigned long _gen31P = 0UL;
bool _count2I = 0;
bool _count2_SCST = 0;
int _count2_Value = 0;
bool _count4I = 0;
bool _count4_SCST = 0;
int _count4_Value = 0;
bool _gen3I = 0;
bool _gen3O = 0;
unsigned long _gen3P = 0UL;
bool _gen12I = 0;
bool _gen12O = 0;
unsigned long _gen12P = 0UL;
bool _dms2Q0 = 0;
bool _dms2Q1 = 0;
bool _dms2Q2 = 0;
bool _dms2Q3 = 0;
bool _dms2Q4 = 0;
bool _dms2Q5 = 0;
bool _dms2Q6 = 0;
bool _dms2Q7 = 0;
bool _dms2Q8 = 0;
bool _dms2Q9 = 0;
bool _gen23I = 0;
bool _gen23O = 0;
unsigned long _gen23P = 0UL;
bool _gen38I = 0;
bool _gen38O = 0;
unsigned long _gen38P = 0UL;
bool _gen11I = 0;
bool _gen11O = 0;
unsigned long _gen11P = 0UL;
bool _gen24I = 0;
bool _gen24O = 0;
unsigned long _gen24P = 0UL;
bool _gen25I = 0;
bool _gen25O = 0;
unsigned long _gen25P = 0UL;
bool _gen8I = 0;
bool _gen8O = 0;
unsigned long _gen8P = 0UL;
bool _trgt8 = 0;
bool _trgt8I = 0;
bool _trgrt1 = 0;
bool _trgrt1I = 0;
bool _trgt1 = 0;
bool _trgt1I = 0;
bool _gen1I = 0;
bool _gen1O = 0;
unsigned long _gen1P = 0UL;
void setup()
{
    pinMode(16, INPUT_PULLUP);
    pinMode(15, INPUT_PULLUP);
    pinMode(14, INPUT_PULLUP);
    pinMode(2, OUTPUT);
    digitalWrite(2, 0);
    pinMode(3, OUTPUT);
    digitalWrite(3, 0);
    pinMode(4, OUTPUT);
    digitalWrite(4, 0);
    pinMode(5, OUTPUT);
    digitalWrite(5, 0);
    pinMode(6, OUTPUT);
    digitalWrite(6, 0);
    pinMode(7, OUTPUT);
    digitalWrite(7, 0);
    pinMode(8, OUTPUT);
    digitalWrite(8, 0);
    pinMode(9, OUTPUT);
    digitalWrite(9, 0);
    pinMode(10, OUTPUT);
    digitalWrite(10, 0);
    pinMode(11, OUTPUT);
    digitalWrite(11, 0);
    pinMode(13, OUTPUT);
    digitalWrite(13, 0);
    if(((readByteFromEEPROM(0, 0, 0x0))) != 36) 
    {
        (updateByteToEEPROM(0, 0, 0x0, (36)));
        (updateIntegerToEEPROM(1, 0, 0x0, (6)));
    }
    _bounseInputD14O =  digitalRead(14);
    _bounseInputD16O =  digitalRead(16);
    _bounseInputD15O =  digitalRead(15);
}
void loop()
{
    bool  _bounceInputTmpD16 =  (digitalRead (16));
    if (_bounseInputD16S)
    {
        if (millis() >= (_bounseInputD16P + 40))
        {
            _bounseInputD16O= _bounceInputTmpD16;
            _bounseInputD16S=0;
        }
    }
    else
    {
        if (_bounceInputTmpD16 != _bounseInputD16O)
        {
            _bounseInputD16S=1;
            _bounseInputD16P = millis();
        }
    }
    bool  _bounceInputTmpD14 =  (digitalRead (14));
    if (_bounseInputD14S)
    {
        if (millis() >= (_bounseInputD14P + 40))
        {
            _bounseInputD14O= _bounceInputTmpD14;
            _bounseInputD14S=0;
        }
    }
    else
    {
        if (_bounceInputTmpD14 != _bounseInputD14O)
        {
            _bounseInputD14S=1;
            _bounseInputD14P = millis();
        }
    }
    bool  _bounceInputTmpD15 =  (digitalRead (15));
    if (_bounseInputD15S)
    {
        if (millis() >= (_bounseInputD15P + 40))
        {
            _bounseInputD15O= _bounceInputTmpD15;
            _bounseInputD15S=0;
        }
    }
    else
    {
        if (_bounceInputTmpD15 != _bounseInputD15O)
        {
            _bounseInputD15S=1;
            _bounseInputD15P = millis();
        }
    }
    //Плата:1
    digitalWrite(13, !(_bounseInputD16O));
    if (1) 
    {
        if (! _gen19I)
        {
            _gen19I = 1;
            _gen19O = 1;
            _gen19P = millis();
        }
    }
     else 
    {
        _gen19I = 0 ;
        _gen19O= 0;
    }
     if (_gen19I &&  _gen19O)   _gen19O = !(_isTimer(_gen19P , 50));
    if (_gen19O)
    {
        _count4_Value = (readIntegerFromEEPROM(1, 0, 0x0));
    }
     else 
    {
        if (!(_bounseInputD14O))
        {
            if (! _count4I) 
            {
                _count4I = 1;
                if(_count4_Value < 9) 
                {
                    _count4_Value = _count4_Value + 1;
                }
            }
        }
         else 
        {
            _count4I = 0;
        }
        if (!(_bounseInputD15O))
        {
            if (! _count4_SCST) 
            {
                _count4_SCST = 1;
                if(_count4_Value > 0) 
                {
                    _count4_Value = _count4_Value - 1;
                }
            }
        }
         else 
        {
            _count4_SCST = 0;
        }
    }
    if((_count4_Value == 0))
    {
        _dms2Q0 = ((!(_bounseInputD14O)) || (!(_bounseInputD15O)));
    }
    else 
    {
        _dms2Q0 = 0;
    }
    if((_count4_Value == 1))
    {
        _dms2Q1 = ((!(_bounseInputD14O)) || (!(_bounseInputD15O)));
    }
    else 
    {
        _dms2Q1 = 0;
    }
    if((_count4_Value == 2))
    {
        _dms2Q2 = ((!(_bounseInputD14O)) || (!(_bounseInputD15O)));
    }
    else 
    {
        _dms2Q2 = 0;
    }
    if((_count4_Value == 3))
    {
        _dms2Q3 = ((!(_bounseInputD14O)) || (!(_bounseInputD15O)));
    }
    else 
    {
        _dms2Q3 = 0;
    }
    if((_count4_Value == 4))
    {
        _dms2Q4 = ((!(_bounseInputD14O)) || (!(_bounseInputD15O)));
    }
    else 
    {
        _dms2Q4 = 0;
    }
    if((_count4_Value == 5))
    {
        _dms2Q5 = ((!(_bounseInputD14O)) || (!(_bounseInputD15O)));
    }
    else 
    {
        _dms2Q5 = 0;
    }
    if((_count4_Value == 6))
    {
        _dms2Q6 = ((!(_bounseInputD14O)) || (!(_bounseInputD15O)));
    }
    else 
    {
        _dms2Q6 = 0;
    }
    if((_count4_Value == 7))
    {
        _dms2Q7 = ((!(_bounseInputD14O)) || (!(_bounseInputD15O)));
    }
    else 
    {
        _dms2Q7 = 0;
    }
    if((_count4_Value == 8))
    {
        _dms2Q8 = ((!(_bounseInputD14O)) || (!(_bounseInputD15O)));
    }
    else 
    {
        _dms2Q8 = 0;
    }
    if((_count4_Value == 9))
    {
        _dms2Q9 = ((!(_bounseInputD14O)) || (!(_bounseInputD15O)));
    }
    else 
    {
        _dms2Q9 = 0;
    }
    digitalWrite(11, _dms2Q9);
    digitalWrite(10, _dms2Q8);
    digitalWrite(9, _dms2Q7);
    digitalWrite(8, _dms2Q6);
    digitalWrite(7, _dms2Q5);
    digitalWrite(6, _dms2Q4);
    digitalWrite(5, _dms2Q3);
    digitalWrite(4, _dms2Q2);
    digitalWrite(3, _dms2Q1);
    digitalWrite(2, _dms2Q0);
    if(((!(_bounseInputD14O)) || (!(_bounseInputD15O))))
    {
         if(!_SEEPR2OSN)
        {
            (updateIntegerToEEPROM(1, 0, 0x0, (_count4_Value)));
            _SEEPR2OSN=1;
        }
    }
    else
    {
         if(_SEEPR2OSN)
        {
            _SEEPR2OSN=0;
        }
    }
    if(((readIntegerFromEEPROM(1, 0, 0x0)) == 0))
    {
        _dms5Q0 = !(_bounseInputD16O);
    }
    else 
    {
        _dms5Q0 = 0;
    }
    if(((readIntegerFromEEPROM(1, 0, 0x0)) == 1))
    {
        _dms5Q1 = !(_bounseInputD16O);
    }
    else 
    {
        _dms5Q1 = 0;
    }
    if(((readIntegerFromEEPROM(1, 0, 0x0)) == 2))
    {
        _dms5Q2 = !(_bounseInputD16O);
    }
    else 
    {
        _dms5Q2 = 0;
    }
    if(((readIntegerFromEEPROM(1, 0, 0x0)) == 3))
    {
        _dms5Q3 = !(_bounseInputD16O);
    }
    else 
    {
        _dms5Q3 = 0;
    }
    if(((readIntegerFromEEPROM(1, 0, 0x0)) == 4))
    {
        _dms5Q4 = !(_bounseInputD16O);
    }
    else 
    {
        _dms5Q4 = 0;
    }
    if(((readIntegerFromEEPROM(1, 0, 0x0)) == 5))
    {
        _dms5Q5 = !(_bounseInputD16O);
    }
    else 
    {
        _dms5Q5 = 0;
    }
    if(((readIntegerFromEEPROM(1, 0, 0x0)) == 6))
    {
        _dms5Q6 = !(_bounseInputD16O);
    }
    else 
    {
        _dms5Q6 = 0;
    }
    if(((readIntegerFromEEPROM(1, 0, 0x0)) == 7))
    {
        _dms5Q7 = !(_bounseInputD16O);
    }
    else 
    {
        _dms5Q7 = 0;
    }
    if(((readIntegerFromEEPROM(1, 0, 0x0)) == 8))
    {
        _dms5Q8 = !(_bounseInputD16O);
    }
    else 
    {
        _dms5Q8 = 0;
    }
    if(((readIntegerFromEEPROM(1, 0, 0x0)) == 9))
    {
        _dms5Q9 = !(_bounseInputD16O);
    }
    else 
    {
        _dms5Q9 = 0;
    }
    bool  _tmp3 = _dms5Q7;
    if (_tmp3)  
    {
         if (! _trgt3I) _trgt3 = ! _trgt3;
    }
    _trgt3I = _tmp3;
    if (_trgt3) 
    {
        if (! _gen10I) 
        {
            _gen10I = 1;
            _gen10O = 1;
            _gen10P =  millis();
        }
    }
     else 
    {
        _gen10I = 0 ;
        _gen10O= 0;
    }
     if (_gen10I) 
    {
         if (_gen10O) 
        {
             if (_isTimer(_gen10P , 1400)) 
            {
                 _gen10P = millis();
                _gen10O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen10P , 1400)) 
            {
                  _gen10P = millis();
                _gen10O = 1;
            }
        }
    }
    if (((!(_gen10O)) && (_trgt3))) 
    {
        if (! _gen31I) 
        {
            _gen31I = 1;
            _gen31O = 1;
            _gen31P =  millis();
        }
    }
     else 
    {
        _gen31I = 0 ;
        _gen31O= 0;
    }
     if (_gen31I) 
    {
         if (_gen31O) 
        {
             if (_isTimer(_gen31P , 350)) 
            {
                 _gen31P = millis();
                _gen31O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen31P , 350)) 
            {
                  _gen31P = millis();
                _gen31O = 1;
            }
        }
    }
    bool  _tmp8 = _dms5Q9;
    if (_tmp8)  
    {
         if (! _trgt8I) _trgt8 = ! _trgt8;
    }
    _trgt8I = _tmp8;
    if (_trgt8) 
    {
        if (! _gen37I) 
        {
            _gen37I = 1;
            _gen37O = 1;
            _gen37P =  millis();
        }
    }
     else 
    {
        _gen37I = 0 ;
        _gen37O= 0;
    }
     if (_gen37I) 
    {
         if (_gen37O) 
        {
             if (_isTimer(_gen37P , 350)) 
            {
                 _gen37P = millis();
                _gen37O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen37P , 350)) 
            {
                  _gen37P = millis();
                _gen37O = 1;
            }
        }
    }
    if (_gen37O) 
    {
        if (! _gen38I) 
        {
            _gen38I = 1;
            _gen38O = 1;
            _gen38P =  millis();
        }
    }
     else 
    {
        _gen38I = 0 ;
        _gen38O= 0;
    }
     if (_gen38I) 
    {
         if (_gen38O) 
        {
             if (_isTimer(_gen38P , 30)) 
            {
                 _gen38P = millis();
                _gen38O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen38P , 30)) 
            {
                  _gen38P = millis();
                _gen38O = 1;
            }
        }
    }
    digitalWrite(6, ((_gen31O) || (_gen38O)));
    digitalWrite(5, ((_gen31O) || (_gen38O)));
    digitalWrite(4, ((_gen31O) || (_gen38O)));
    digitalWrite(3, ((_gen31O) || (_gen38O)));
    digitalWrite(2, ((_gen31O) || (_gen38O)));
    if (((!(_gen31O)) && (((!(_gen10O)) && (_trgt3))))) 
    {
        if (! _gen4I) 
        {
            _gen4I = 1;
            _gen4O = 1;
            _gen4P =  millis();
        }
    }
     else 
    {
        _gen4I = 0 ;
        _gen4O= 0;
    }
     if (_gen4I) 
    {
         if (_gen4O) 
        {
             if (_isTimer(_gen4P , 30)) 
            {
                 _gen4P = millis();
                _gen4O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen4P , 30)) 
            {
                  _gen4P = millis();
                _gen4O = 1;
            }
        }
    }
    bool  _tmp5 = _dms5Q8;
    if (_tmp5)  
    {
         if (! _trgt5I) _trgt5 = ! _trgt5;
    }
    _trgt5I = _tmp5;
    if (_trgt5) 
    {
        if (! _gen39I) 
        {
            _gen39I = 1;
            _gen39O = 1;
            _gen39P =  millis();
        }
    }
     else 
    {
        _gen39I = 0 ;
        _gen39O= 0;
    }
     if (_gen39I) 
    {
         if (_gen39O) 
        {
             if (_isTimer(_gen39P , 350)) 
            {
                 _gen39P = millis();
                _gen39O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen39P , 350)) 
            {
                  _gen39P = millis();
                _gen39O = 1;
            }
        }
    }
    if (_gen39O) 
    {
        if (! _gen40I) 
        {
            _gen40I = 1;
            _gen40O = 1;
            _gen40P =  millis();
        }
    }
     else 
    {
        _gen40I = 0 ;
        _gen40O= 0;
    }
     if (_gen40I) 
    {
         if (_gen40O) 
        {
             if (_isTimer(_gen40P , 30)) 
            {
                 _gen40P = millis();
                _gen40O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen40P , 30)) 
            {
                  _gen40P = millis();
                _gen40O = 1;
            }
        }
    }
    digitalWrite(11, ((_gen4O) || (_gen40O)));
    digitalWrite(10, ((_gen4O) || (_gen40O)));
    digitalWrite(9, ((_gen4O) || (_gen40O)));
    digitalWrite(8, ((_gen4O) || (_gen40O)));
    digitalWrite(7, ((_gen4O) || (_gen40O)));
    if (_gen10O) 
    {
        if (! _gen30I) 
        {
            _gen30I = 1;
            _gen30O = 1;
            _gen30P =  millis();
        }
    }
     else 
    {
        _gen30I = 0 ;
        _gen30O= 0;
    }
     if (_gen30I) 
    {
         if (_gen30O) 
        {
             if (_isTimer(_gen30P , 350)) 
            {
                 _gen30P = millis();
                _gen30O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen30P , 350)) 
            {
                  _gen30P = millis();
                _gen30O = 1;
            }
        }
    }
    if (_gen30O) 
    {
        if (! _gen2I) 
        {
            _gen2I = 1;
            _gen2O = 1;
            _gen2P =  millis();
        }
    }
     else 
    {
        _gen2I = 0 ;
        _gen2O= 0;
    }
     if (_gen2I) 
    {
         if (_gen2O) 
        {
             if (_isTimer(_gen2P , 30)) 
            {
                 _gen2P = millis();
                _gen2O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen2P , 30)) 
            {
                  _gen2P = millis();
                _gen2O = 1;
            }
        }
    }
    digitalWrite(6, ((_gen2O) || (0)));
    digitalWrite(5, ((_gen2O) || (0)));
    digitalWrite(4, ((_gen2O) || (0)));
    digitalWrite(3, ((_gen2O) || (0)));
    digitalWrite(2, ((_gen2O) || (0)));
    digitalWrite(11, ((((!(_gen30O)) && (_gen10O))) || (0)));
    digitalWrite(10, ((((!(_gen30O)) && (_gen10O))) || (0)));
    digitalWrite(9, ((((!(_gen30O)) && (_gen10O))) || (0)));
    digitalWrite(8, ((((!(_gen30O)) && (_gen10O))) || (0)));
    digitalWrite(7, ((((!(_gen30O)) && (_gen10O))) || (0)));
    bool  _tmp10 = _dms5Q6;
    if (_tmp10)  
    {
         if (! _trgt10I) _trgt10 = ! _trgt10;
    }
    _trgt10I = _tmp10;
    if (_trgt10) 
    {
        if (! _gen17I) 
        {
            _gen17I = 1;
            _gen17O = 1;
            _gen17P =  millis();
        }
    }
     else 
    {
        _gen17I = 0 ;
        _gen17O= 0;
    }
     if (_gen17I) 
    {
         if (_gen17O) 
        {
             if (_isTimer(_gen17P , 350)) 
            {
                 _gen17P = millis();
                _gen17O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen17P , 350)) 
            {
                  _gen17P = millis();
                _gen17O = 1;
            }
        }
    }
    if (_gen17O) 
    {
        if (! _gen15I) 
        {
            _gen15I = 1;
            _gen15O = 1;
            _gen15P =  millis();
        }
    }
     else 
    {
        _gen15I = 0 ;
        _gen15O= 0;
    }
     if (_gen15I) 
    {
         if (_gen15O) 
        {
             if (_isTimer(_gen15P , 35)) 
            {
                 _gen15P = millis();
                _gen15O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen15P , 35)) 
            {
                  _gen15P = millis();
                _gen15O = 1;
            }
        }
    }
    if (((!(_gen17O)) && (_trgt10))) 
    {
        if (! _gen16I) 
        {
            _gen16I = 1;
            _gen16O = 1;
            _gen16P =  millis();
        }
    }
     else 
    {
        _gen16I = 0 ;
        _gen16O= 0;
    }
     if (_gen16I) 
    {
         if (_gen16O) 
        {
             if (_isTimer(_gen16P , 35)) 
            {
                 _gen16P = millis();
                _gen16O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen16P , 35)) 
            {
                  _gen16P = millis();
                _gen16O = 1;
            }
        }
    }
    if (!(_trgt10)) 
    {
         if (_trgrt1I) 
        {
             _trgrt1 = 0;
        }
         else 
        {
            _trgrt1 = 1;
            _trgrt1I = 1;
        }
    }
     else 
    {
        _trgrt1 = 0;
        _trgrt1I = 0;
    }
    ;
    if (0)
    {
        _count2_Value = 1;
    }
     else 
    {
        if (_trgrt1)
        {
            _count2_Value = 0;
        }
         else 
        {
            if (_gen15O)
            {
                if (! _count2I) 
                {
                    _count2I = 1;
                    if(_count2_Value < 5) 
                    {
                        _count2_Value = _count2_Value + 1;
                    }
                }
            }
             else 
            {
                _count2I = 0;
            }
            if (_gen16O)
            {
                if (! _count2_SCST) 
                {
                    _count2_SCST = 1;
                    if(_count2_Value > 1) 
                    {
                        _count2_Value = _count2_Value - 1;
                    }
                }
            }
             else 
            {
                _count2_SCST = 0;
            }
        }
    }
    if((_count2_Value == 0))
    {
        _dms4Q0 = _trgt10;
    }
    else 
    {
        _dms4Q0 = 0;
    }
    if((_count2_Value == 1))
    {
        _dms4Q1 = _trgt10;
    }
    else 
    {
        _dms4Q1 = 0;
    }
    if((_count2_Value == 2))
    {
        _dms4Q2 = _trgt10;
    }
    else 
    {
        _dms4Q2 = 0;
    }
    if((_count2_Value == 3))
    {
        _dms4Q3 = _trgt10;
    }
    else 
    {
        _dms4Q3 = 0;
    }
    if((_count2_Value == 4))
    {
        _dms4Q4 = _trgt10;
    }
    else 
    {
        _dms4Q4 = 0;
    }
    if((_count2_Value == 5))
    {
        _dms4Q5 = _trgt10;
    }
    else 
    {
        _dms4Q5 = 0;
    }
    digitalWrite(11, _dms4Q5);
    digitalWrite(2, _dms4Q5);
    digitalWrite(10, _dms4Q4);
    digitalWrite(3, _dms4Q4);
    digitalWrite(9, _dms4Q3);
    digitalWrite(4, _dms4Q3);
    digitalWrite(8, _dms4Q2);
    digitalWrite(5, _dms4Q2);
    digitalWrite(7, _dms4Q1);
    digitalWrite(6, _dms4Q1);
    bool  _tmp2 = _dms5Q5;
    if (_tmp2)  
    {
         if (! _trgt2I) _trgt2 = ! _trgt2;
    }
    _trgt2I = _tmp2;
    if (_trgt2) 
    {
        if (! _gen20I) 
        {
            _gen20I = 1;
            _gen20O = 1;
            _gen20P =  millis();
        }
    }
     else 
    {
        _gen20I = 0 ;
        _gen20O= 0;
    }
     if (_gen20I) 
    {
         if (_gen20O) 
        {
             if (_isTimer(_gen20P , 1400)) 
            {
                 _gen20P = millis();
                _gen20O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen20P , 1400)) 
            {
                  _gen20P = millis();
                _gen20O = 1;
            }
        }
    }
    if (((!(_gen20O)) && (_trgt2))) 
    {
        if (! _gen8I) 
        {
            _gen8I = 1;
            _gen8O = 1;
            _gen8P =  millis();
        }
    }
     else 
    {
        _gen8I = 0 ;
        _gen8O= 0;
    }
     if (_gen8I) 
    {
         if (_gen8O) 
        {
             if (_isTimer(_gen8P , 350)) 
            {
                 _gen8P = millis();
                _gen8O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen8P , 350)) 
            {
                  _gen8P = millis();
                _gen8O = 1;
            }
        }
    }
    if (_gen8O) 
    {
        if (! _gen9I) 
        {
            _gen9I = 1;
            _gen9O = 1;
            _gen9P =  millis();
        }
    }
     else 
    {
        _gen9I = 0 ;
        _gen9O= 0;
    }
     if (_gen9I) 
    {
         if (_gen9O) 
        {
             if (_isTimer(_gen9P , 30)) 
            {
                 _gen9P = millis();
                _gen9O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen9P , 30)) 
            {
                  _gen9P = millis();
                _gen9O = 1;
            }
        }
    }
    digitalWrite(6, ((_gen9O) || (0)));
    digitalWrite(5, ((_gen9O) || (0)));
    digitalWrite(4, ((_gen9O) || (0)));
    digitalWrite(3, ((_gen9O) || (0)));
    digitalWrite(2, ((_gen9O) || (0)));
    if (((!(_gen8O)) && (((!(_gen20O)) && (_trgt2))))) 
    {
        if (! _gen12I) 
        {
            _gen12I = 1;
            _gen12O = 1;
            _gen12P =  millis();
        }
    }
     else 
    {
        _gen12I = 0 ;
        _gen12O= 0;
    }
     if (_gen12I) 
    {
         if (_gen12O) 
        {
             if (_isTimer(_gen12P , 30)) 
            {
                 _gen12P = millis();
                _gen12O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen12P , 30)) 
            {
                  _gen12P = millis();
                _gen12O = 1;
            }
        }
    }
    digitalWrite(11, ((_gen12O) || (0)));
    digitalWrite(10, ((_gen12O) || (0)));
    digitalWrite(9, ((_gen12O) || (0)));
    digitalWrite(8, ((_gen12O) || (0)));
    digitalWrite(7, ((_gen12O) || (0)));
    if (_gen20O) 
    {
        if (! _gen7I) 
        {
            _gen7I = 1;
            _gen7O = 1;
            _gen7P =  millis();
        }
    }
     else 
    {
        _gen7I = 0 ;
        _gen7O= 0;
    }
     if (_gen7I) 
    {
         if (_gen7O) 
        {
             if (_isTimer(_gen7P , 350)) 
            {
                 _gen7P = millis();
                _gen7O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen7P , 350)) 
            {
                  _gen7P = millis();
                _gen7O = 1;
            }
        }
    }
    digitalWrite(6, ((_gen7O) || (0)));
    digitalWrite(5, ((_gen7O) || (0)));
    digitalWrite(4, ((_gen7O) || (0)));
    digitalWrite(3, ((_gen7O) || (0)));
    digitalWrite(2, ((_gen7O) || (0)));
    digitalWrite(11, ((((!(_gen7O)) && (_gen20O))) || (0)));
    digitalWrite(10, ((((!(_gen7O)) && (_gen20O))) || (0)));
    digitalWrite(9, ((((!(_gen7O)) && (_gen20O))) || (0)));
    digitalWrite(8, ((((!(_gen7O)) && (_gen20O))) || (0)));
    digitalWrite(7, ((((!(_gen7O)) && (_gen20O))) || (0)));
    bool  _tmp1 = _dms5Q4;
    if (_tmp1)  
    {
         if (! _trgt1I) _trgt1 = ! _trgt1;
    }
    _trgt1I = _tmp1;
    if (_trgt1) 
    {
        if (! _gen6I) 
        {
            _gen6I = 1;
            _gen6O = 1;
            _gen6P =  millis();
        }
    }
     else 
    {
        _gen6I = 0 ;
        _gen6O= 0;
    }
     if (_gen6I) 
    {
         if (_gen6O) 
        {
             if (_isTimer(_gen6P , 700)) 
            {
                 _gen6P = millis();
                _gen6O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen6P , 500)) 
            {
                  _gen6P = millis();
                _gen6O = 1;
            }
        }
    }
    if (_gen6O) 
    {
        if (! _gen22I) 
        {
            _gen22I = 1;
            _gen22O = 1;
            _gen22P =  millis();
        }
    }
     else 
    {
        _gen22I = 0 ;
        _gen22O= 0;
    }
     if (_gen22I) 
    {
         if (_gen22O) 
        {
             if (_isTimer(_gen22P , 350)) 
            {
                 _gen22P = millis();
                _gen22O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen22P , 350)) 
            {
                  _gen22P = millis();
                _gen22O = 1;
            }
        }
    }
    if (_gen22O) 
    {
        if (! _gen23I) 
        {
            _gen23I = 1;
            _gen23O = 1;
            _gen23P =  millis();
        }
    }
     else 
    {
        _gen23I = 0 ;
        _gen23O= 0;
    }
     if (_gen23I) 
    {
         if (_gen23O) 
        {
             if (_isTimer(_gen23P , 30)) 
            {
                 _gen23P = millis();
                _gen23O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen23P , 30)) 
            {
                  _gen23P = millis();
                _gen23O = 1;
            }
        }
    }
    digitalWrite(6, ((_gen23O) || (0)));
    digitalWrite(5, ((_gen23O) || (0)));
    digitalWrite(4, ((_gen23O) || (0)));
    digitalWrite(3, ((_gen23O) || (0)));
    digitalWrite(2, ((_gen23O) || (0)));
    if (((!(_gen22O)) && (_gen6O))) 
    {
        if (! _gen24I) 
        {
            _gen24I = 1;
            _gen24O = 1;
            _gen24P =  millis();
        }
    }
     else 
    {
        _gen24I = 0 ;
        _gen24O= 0;
    }
     if (_gen24I) 
    {
         if (_gen24O) 
        {
             if (_isTimer(_gen24P , 30)) 
            {
                 _gen24P = millis();
                _gen24O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen24P , 30)) 
            {
                  _gen24P = millis();
                _gen24O = 1;
            }
        }
    }
    digitalWrite(11, ((_gen24O) || (0)));
    digitalWrite(10, ((_gen24O) || (0)));
    digitalWrite(9, ((_gen24O) || (0)));
    digitalWrite(8, ((_gen24O) || (0)));
    digitalWrite(7, ((_gen24O) || (0)));
    bool  _tmp7 = _dms5Q3;
    if (_tmp7)  
    {
         if (! _trgt7I) _trgt7 = ! _trgt7;
    }
    _trgt7I = _tmp7;
    if (_trgt7) 
    {
         if (! _gen1I) 
        {
            _gen1I = 1;
            _gen1O = 1;
            _gen1P = millis();
        }
    }
     else 
    {
        _gen1I = 0 ;
        _gen1O= 0;
    }
    if (_gen1I) 
    {
          if (_isTimer (_gen1P , 500)) 
        {
             _gen1P = millis();
            _gen1O = ! _gen1O;
        }
    }
    if (_gen1O) 
    {
        if (! _gen3I) 
        {
            _gen3I = 1;
            _gen3O = 1;
            _gen3P =  millis();
        }
    }
     else 
    {
        _gen3I = 0 ;
        _gen3O= 0;
    }
     if (_gen3I) 
    {
         if (_gen3O) 
        {
             if (_isTimer(_gen3P , 30)) 
            {
                 _gen3P = millis();
                _gen3O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen3P , 30)) 
            {
                  _gen3P = millis();
                _gen3O = 1;
            }
        }
    }
    digitalWrite(6, ((_gen3O) || (0)));
    digitalWrite(5, ((_gen3O) || (0)));
    digitalWrite(4, ((_gen3O) || (0)));
    digitalWrite(3, ((_gen3O) || (0)));
    digitalWrite(2, ((_gen3O) || (0)));
    if (((!(_gen1O)) && (_trgt7))) 
    {
        if (! _gen5I) 
        {
            _gen5I = 1;
            _gen5O = 1;
            _gen5P =  millis();
        }
    }
     else 
    {
        _gen5I = 0 ;
        _gen5O= 0;
    }
     if (_gen5I) 
    {
         if (_gen5O) 
        {
             if (_isTimer(_gen5P , 30)) 
            {
                 _gen5P = millis();
                _gen5O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen5P , 30)) 
            {
                  _gen5P = millis();
                _gen5O = 1;
            }
        }
    }
    digitalWrite(11, ((_gen5O) || (0)));
    digitalWrite(10, ((_gen5O) || (0)));
    digitalWrite(9, ((_gen5O) || (0)));
    digitalWrite(8, ((_gen5O) || (0)));
    digitalWrite(7, ((_gen5O) || (0)));
    bool  _tmp11 = _dms5Q2;
    if (_tmp11)  
    {
         if (! _trgt11I) _trgt11 = ! _trgt11;
    }
    _trgt11I = _tmp11;
    if (_trgt11) 
    {
         if (! _gen11I) 
        {
            _gen11I = 1;
            _gen11O = 1;
            _gen11P = millis();
        }
    }
     else 
    {
        _gen11I = 0 ;
        _gen11O= 0;
    }
    if (_gen11I) 
    {
          if (_isTimer (_gen11P , 500)) 
        {
             _gen11P = millis();
            _gen11O = ! _gen11O;
        }
    }
    if (_gen11O) 
    {
        if (! _gen13I) 
        {
            _gen13I = 1;
            _gen13O = 1;
            _gen13P =  millis();
        }
    }
     else 
    {
        _gen13I = 0 ;
        _gen13O= 0;
    }
     if (_gen13I) 
    {
         if (_gen13O) 
        {
             if (_isTimer(_gen13P , 100)) 
            {
                 _gen13P = millis();
                _gen13O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen13P , 100)) 
            {
                  _gen13P = millis();
                _gen13O = 1;
            }
        }
    }
    digitalWrite(6, ((_gen13O) || (0)));
    digitalWrite(5, ((_gen13O) || (0)));
    digitalWrite(4, ((_gen13O) || (0)));
    digitalWrite(3, ((_gen13O) || (0)));
    digitalWrite(2, ((_gen13O) || (0)));
    if (((!(_gen11O)) && (_trgt11))) 
    {
        if (! _gen21I) 
        {
            _gen21I = 1;
            _gen21O = 1;
            _gen21P =  millis();
        }
    }
     else 
    {
        _gen21I = 0 ;
        _gen21O= 0;
    }
     if (_gen21I) 
    {
         if (_gen21O) 
        {
             if (_isTimer(_gen21P , 100)) 
            {
                 _gen21P = millis();
                _gen21O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen21P , 100)) 
            {
                  _gen21P = millis();
                _gen21O = 1;
            }
        }
    }
    digitalWrite(11, ((_gen21O) || (0)));
    digitalWrite(10, ((_gen21O) || (0)));
    digitalWrite(9, ((_gen21O) || (0)));
    digitalWrite(8, ((_gen21O) || (0)));
    digitalWrite(7, ((_gen21O) || (0)));
    bool  _tmp4 = _dms5Q1;
    if (_tmp4)  
    {
         if (! _trgt4I) _trgt4 = ! _trgt4;
    }
    _trgt4I = _tmp4;
    if (_trgt4) 
    {
        if (! _gen29I) 
        {
            _gen29I = 1;
            _gen29O = 1;
            _gen29P =  millis();
        }
    }
     else 
    {
        _gen29I = 0 ;
        _gen29O= 0;
    }
     if (_gen29I) 
    {
         if (_gen29O) 
        {
             if (_isTimer(_gen29P , 380)) 
            {
                 _gen29P = millis();
                _gen29O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen29P , 380)) 
            {
                  _gen29P = millis();
                _gen29O = 1;
            }
        }
    }
    if (((!(_gen29O)) && (_trgt4))) 
    {
        if (! _gen28I) 
        {
            _gen28I = 1;
            _gen28O = 1;
            _gen28P =  millis();
        }
    }
     else 
    {
        _gen28I = 0 ;
        _gen28O= 0;
    }
     if (_gen28I) 
    {
         if (_gen28O) 
        {
             if (_isTimer(_gen28P , 190)) 
            {
                 _gen28P = millis();
                _gen28O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen28P , 190)) 
            {
                  _gen28P = millis();
                _gen28O = 1;
            }
        }
    }
    if (_gen28O) 
    {
        if (! _gen27I) 
        {
            _gen27I = 1;
            _gen27O = 1;
            _gen27P =  millis();
        }
    }
     else 
    {
        _gen27I = 0 ;
        _gen27O= 0;
    }
     if (_gen27I) 
    {
         if (_gen27O) 
        {
             if (_isTimer(_gen27P , 65)) 
            {
                 _gen27P = millis();
                _gen27O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen27P , 30)) 
            {
                  _gen27P = millis();
                _gen27O = 1;
            }
        }
    }
    digitalWrite(11, ((_gen27O) || (0)));
    digitalWrite(10, ((_gen27O) || (0)));
    digitalWrite(9, ((_gen27O) || (0)));
    digitalWrite(8, ((_gen27O) || (0)));
    digitalWrite(7, ((_gen27O) || (0)));
    if (_gen29O) 
    {
        if (! _gen26I) 
        {
            _gen26I = 1;
            _gen26O = 1;
            _gen26P =  millis();
        }
    }
     else 
    {
        _gen26I = 0 ;
        _gen26O= 0;
    }
     if (_gen26I) 
    {
         if (_gen26O) 
        {
             if (_isTimer(_gen26P , 190)) 
            {
                 _gen26P = millis();
                _gen26O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen26P , 190)) 
            {
                  _gen26P = millis();
                _gen26O = 1;
            }
        }
    }
    if (_gen26O) 
    {
        if (! _gen25I) 
        {
            _gen25I = 1;
            _gen25O = 1;
            _gen25P =  millis();
        }
    }
     else 
    {
        _gen25I = 0 ;
        _gen25O= 0;
    }
     if (_gen25I) 
    {
         if (_gen25O) 
        {
             if (_isTimer(_gen25P , 65)) 
            {
                 _gen25P = millis();
                _gen25O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen25P , 30)) 
            {
                  _gen25P = millis();
                _gen25O = 1;
            }
        }
    }
    digitalWrite(6, ((_gen25O) || (0)));
    digitalWrite(5, ((_gen25O) || (0)));
    digitalWrite(4, ((_gen25O) || (0)));
    digitalWrite(3, ((_gen25O) || (0)));
    digitalWrite(2, ((_gen25O) || (0)));
    bool  _tmp12 = _dms5Q0;
    if (_tmp12)  
    {
         if (! _trgt12I) _trgt12 = ! _trgt12;
    }
    _trgt12I = _tmp12;
    if (_trgt12) 
    {
         if (! _gen41I) 
        {
            _gen41I = 1;
            _gen41O = 1;
            _gen41P = millis();
        }
    }
     else 
    {
        _gen41I = 0 ;
        _gen41O= 0;
    }
    if (_gen41I) 
    {
          if (_isTimer (_gen41P , 500)) 
        {
             _gen41P = millis();
            _gen41O = ! _gen41O;
        }
    }
    digitalWrite(11, ((((!(_gen41O)) && (_trgt12))) || (0)));
    digitalWrite(10, ((((!(_gen41O)) && (_trgt12))) || (0)));
    digitalWrite(9, ((((!(_gen41O)) && (_trgt12))) || (0)));
    digitalWrite(8, ((((!(_gen41O)) && (_trgt12))) || (0)));
    digitalWrite(7, ((((!(_gen41O)) && (_trgt12))) || (0)));
    digitalWrite(6, ((_gen41O) || (0)));
    digitalWrite(5, ((_gen41O) || (0)));
    digitalWrite(4, ((_gen41O) || (0)));
    digitalWrite(3, ((_gen41O) || (0)));
    digitalWrite(2, ((_gen41O) || (0)));
}
bool _isTimer(unsigned long startTime, unsigned long period)
{
    unsigned long currentTime;
    currentTime = millis();
    if (currentTime>= startTime) 
    {
        return (currentTime>=(startTime + period));
    }
     else 
    {
        return (currentTime >=(4294967295-startTime+period));
    }
}
byte readByteFromEEPROM(int addres, byte bitAddres, byte chipAddres)
{
    return EEPROM.read(addres);
}
void updateByteToEEPROM(int addres, byte bitAddres, byte chipAddres, byte value)
{
    return EEPROM.update(addres, value);
}
int readIntegerFromEEPROM(int addres, byte bitAddres, byte chipAddres)
{
    byte hight = readByteFromEEPROM(addres,  bitAddres,  chipAddres);
    byte low = readByteFromEEPROM((addres+1),  bitAddres,  chipAddres);
    return  word(hight, low);
}
void updateIntegerToEEPROM(int addres, byte bitAddres, byte chipAddres, int value)
{
    updateByteToEEPROM(addres,  bitAddres,  chipAddres, highByte(value));
    updateByteToEEPROM((addres+1),  bitAddres,  chipAddres, lowByte(value));
}
