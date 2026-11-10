/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00510500; name: FUN_00510500
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00510500(int param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_70;
  float fStack_6c;
  float local_68;
  float local_60;
  float fStack_5c;
  float local_58;
  
  if ((DAT_0275b460 & 1) == 0) {
    DAT_0275b460 = 1;
    _DAT_0275b5e0 = 0xff7fffffff7fffff;
    _DAT_0275b5e8 = 0xff7fffffff7fffff;
    _DAT_0275b5f0 = 0xff7fffffff7fffff;
    _DAT_0275b5f8 = 0xff7fffffff7fffff;
    lVar2 = 0;
    _DAT_0275b600 = 0xff7fffffff7fffff;
    _DAT_0275b608 = 0xff7fffffff7fffff;
    _DAT_0275b660 = 0xff7fffffff7fffff;
    _DAT_0275b668 = 0xff7fffffff7fffff;
    _DAT_0275b670 = 0xff7fffffff7fffff;
    _DAT_0275b678 = 0xff7fffffff7fffff;
    _DAT_0275b680 = 0xff7fffffff7fffff;
    _DAT_0275b688 = 0xff7fffffff7fffff;
    _DAT_0275b690 = 0xff7fffffff7fffff;
    _DAT_0275b698 = 0xff7fffffff7fffff;
    _DAT_0275b6a0 = 0xff7fffffff7fffff;
    _DAT_0275b6a8 = 0xff7fffffff7fffff;
    _DAT_0275b6b0 = 0xff7fffffff7fffff;
    _DAT_0275b6b8 = 0xff7fffffff7fffff;
    _DAT_0275b6c0 = 0xff7fffffff7fffff;
    _DAT_0275b6c8 = 0xff7fffffff7fffff;
    _DAT_0275b6d0 = 0xff7fffffff7fffff;
    _DAT_0275b6d8 = 0xff7fffffff7fffff;
    DAT_0275b6e0 = -3.4028235e+38;
    _DAT_0275b610 = 0xff7fffffff7fffff;
    _DAT_0275b618 = 0xff7fffffff7fffff;
    _DAT_0275b620 = 0xff7fffffff7fffff;
    _DAT_0275b628 = 0xff7fffffff7fffff;
    _DAT_0275b630 = 0xff7fffffff7fffff;
    _DAT_0275b638 = 0xff7fffffff7fffff;
    _DAT_0275b640 = 0xff7fffffff7fffff;
    _DAT_0275b648 = 0xff7fffffff7fffff;
    _DAT_0275b650 = 0xff7fffffff7fffff;
    _DAT_0275b658 = 0xff7fffffff7fffff;
    _DAT_0275b6e4 = 0xff7fffffff7fffff;
    _DAT_0275b6ec = 0xff7fffffff7fffff;
    _DAT_0275b6f4 = 0xff7fffffff7fffff;
    _DAT_0275b6fc = 0xff7fffffff7fffff;
    _DAT_0275b704 = 0xff7fffffff7fffff;
    _DAT_0275b70c = 0xff7fffffff7fffff;
    _DAT_0275b714 = 0xff7fffffff7fffff;
    _DAT_0275b71c = 0xff7fffffff7fffff;
    _DAT_0275b724 = 0xff7fffffff7fffff;
    _DAT_0275b72c = 0xff7fffffff7fffff;
    _DAT_0275b734 = 0xff7fffffff7fffff;
    _DAT_0275b73c = 0xff7fffffff7fffff;
    _DAT_0275b744 = 0xff7fffffff7fffff;
    _DAT_0275b74c = 0xff7fffffff7fffff;
    _DAT_0275b754 = 0xff7fffffff7fffff;
    DAT_0275b75c = -3.4028235e+38;
    do {
      fVar7 = *(float *)(&DAT_0275b9f8 + lVar2 * 2);
      fVar8 = *(float *)((long)&DAT_0275b9f8 + lVar2 * 0x10 + 4);
      fVar9 = (float)(&DAT_0275ba00)[lVar2 * 4];
      uVar1 = 0;
      puVar3 = &DAT_0275b5ec;
      do {
        FUN_005115a0(&local_90,uVar1 & 0xffffffff);
        fVar6 = fStack_5c + fVar7 * fStack_8c + fVar8 * fStack_7c + fVar9 * fStack_6c;
        fVar4 = local_60 + fVar7 * local_90 + fVar8 * local_80 + fVar9 * local_70;
        fVar5 = local_58 + fVar7 * local_88 + fVar8 * local_78 + fVar9 * local_68;
        if (fVar4 <= (float)puVar3[-3]) {
          fVar4 = (float)puVar3[-3];
        }
        if (fVar6 <= (float)puVar3[-2]) {
          fVar6 = (float)puVar3[-2];
        }
        puVar3[-3] = fVar4;
        if (fVar5 <= (float)puVar3[-1]) {
          fVar5 = (float)puVar3[-1];
        }
        uVar1 = uVar1 + 1;
        puVar3[-2] = fVar6;
        puVar3[-1] = fVar5;
        puVar3 = puVar3 + 4;
      } while (uVar1 != 0x18);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x61);
    fVar7 = DAT_0275b5e0;
    if (DAT_0275b5e0 <= DAT_0275b5e4) {
      fVar7 = DAT_0275b5e4;
    }
    if (fVar7 <= DAT_0275b5e8) {
      fVar7 = DAT_0275b5e8;
    }
    _DAT_0275b5e8 = CONCAT44(fVar7,DAT_0275b5e8);
    fVar7 = DAT_0275b5f0;
    if (DAT_0275b5f0 <= DAT_0275b5f4) {
      fVar7 = DAT_0275b5f4;
    }
    if (fVar7 <= DAT_0275b5f8) {
      fVar7 = DAT_0275b5f8;
    }
    _DAT_0275b5f8 = CONCAT44(fVar7,DAT_0275b5f8);
    fVar7 = DAT_0275b600;
    if (DAT_0275b600 <= DAT_0275b604) {
      fVar7 = DAT_0275b604;
    }
    if (fVar7 <= DAT_0275b608) {
      fVar7 = DAT_0275b608;
    }
    _DAT_0275b608 = CONCAT44(fVar7,DAT_0275b608);
    fVar7 = DAT_0275b610;
    if (DAT_0275b610 <= DAT_0275b614) {
      fVar7 = DAT_0275b614;
    }
    if (fVar7 <= DAT_0275b618) {
      fVar7 = DAT_0275b618;
    }
    _DAT_0275b618 = CONCAT44(fVar7,DAT_0275b618);
    fVar7 = DAT_0275b620;
    if (DAT_0275b620 <= DAT_0275b624) {
      fVar7 = DAT_0275b624;
    }
    if (fVar7 <= DAT_0275b628) {
      fVar7 = DAT_0275b628;
    }
    _DAT_0275b628 = CONCAT44(fVar7,DAT_0275b628);
    fVar7 = DAT_0275b630;
    if (DAT_0275b630 <= DAT_0275b634) {
      fVar7 = DAT_0275b634;
    }
    if (fVar7 <= DAT_0275b638) {
      fVar7 = DAT_0275b638;
    }
    _DAT_0275b638 = CONCAT44(fVar7,DAT_0275b638);
    fVar7 = DAT_0275b640;
    if (DAT_0275b640 <= DAT_0275b644) {
      fVar7 = DAT_0275b644;
    }
    if (fVar7 <= DAT_0275b648) {
      fVar7 = DAT_0275b648;
    }
    _DAT_0275b648 = CONCAT44(fVar7,DAT_0275b648);
    fVar7 = DAT_0275b650;
    if (DAT_0275b650 <= DAT_0275b654) {
      fVar7 = DAT_0275b654;
    }
    if (fVar7 <= DAT_0275b658) {
      fVar7 = DAT_0275b658;
    }
    _DAT_0275b658 = CONCAT44(fVar7,DAT_0275b658);
    fVar7 = DAT_0275b660;
    if (DAT_0275b660 <= DAT_0275b664) {
      fVar7 = DAT_0275b664;
    }
    if (fVar7 <= DAT_0275b668) {
      fVar7 = DAT_0275b668;
    }
    _DAT_0275b668 = CONCAT44(fVar7,DAT_0275b668);
    fVar7 = DAT_0275b670;
    if (DAT_0275b670 <= DAT_0275b674) {
      fVar7 = DAT_0275b674;
    }
    if (fVar7 <= DAT_0275b678) {
      fVar7 = DAT_0275b678;
    }
    _DAT_0275b678 = CONCAT44(fVar7,DAT_0275b678);
    fVar7 = DAT_0275b680;
    if (DAT_0275b680 <= DAT_0275b684) {
      fVar7 = DAT_0275b684;
    }
    if (fVar7 <= DAT_0275b688) {
      fVar7 = DAT_0275b688;
    }
    _DAT_0275b688 = CONCAT44(fVar7,DAT_0275b688);
    fVar7 = DAT_0275b690;
    if (DAT_0275b690 <= DAT_0275b694) {
      fVar7 = DAT_0275b694;
    }
    if (fVar7 <= DAT_0275b698) {
      fVar7 = DAT_0275b698;
    }
    _DAT_0275b698 = CONCAT44(fVar7,DAT_0275b698);
    fVar7 = DAT_0275b6a0;
    if (DAT_0275b6a0 <= DAT_0275b6a4) {
      fVar7 = DAT_0275b6a4;
    }
    if (fVar7 <= DAT_0275b6a8) {
      fVar7 = DAT_0275b6a8;
    }
    _DAT_0275b6a8 = CONCAT44(fVar7,DAT_0275b6a8);
    fVar7 = DAT_0275b6b0;
    if (DAT_0275b6b0 <= DAT_0275b6b4) {
      fVar7 = DAT_0275b6b4;
    }
    if (fVar7 <= DAT_0275b6b8) {
      fVar7 = DAT_0275b6b8;
    }
    _DAT_0275b6b8 = CONCAT44(fVar7,DAT_0275b6b8);
    fVar7 = DAT_0275b6c0;
    if (DAT_0275b6c0 <= DAT_0275b6c4) {
      fVar7 = DAT_0275b6c4;
    }
    if (fVar7 <= DAT_0275b6c8) {
      fVar7 = DAT_0275b6c8;
    }
    _DAT_0275b6c8 = CONCAT44(fVar7,DAT_0275b6c8);
    fVar7 = DAT_0275b6d0;
    if (DAT_0275b6d0 <= DAT_0275b6d4) {
      fVar7 = DAT_0275b6d4;
    }
    if (fVar7 <= DAT_0275b6d8) {
      fVar7 = DAT_0275b6d8;
    }
    _DAT_0275b6d8 = CONCAT44(fVar7,DAT_0275b6d8);
    fVar7 = DAT_0275b6e0;
    if (DAT_0275b6e0 <= DAT_0275b6e4) {
      fVar7 = DAT_0275b6e4;
    }
    if (fVar7 <= DAT_0275b6e8) {
      fVar7 = DAT_0275b6e8;
    }
    _DAT_0275b6ec = CONCAT44(DAT_0275b6f0,fVar7);
    fVar7 = DAT_0275b6f0;
    if (DAT_0275b6f0 <= DAT_0275b6f4) {
      fVar7 = DAT_0275b6f4;
    }
    if (fVar7 <= DAT_0275b6f8) {
      fVar7 = DAT_0275b6f8;
    }
    _DAT_0275b6fc = CONCAT44(DAT_0275b700,fVar7);
    fVar7 = DAT_0275b700;
    if (DAT_0275b700 <= DAT_0275b704) {
      fVar7 = DAT_0275b704;
    }
    if (fVar7 <= DAT_0275b708) {
      fVar7 = DAT_0275b708;
    }
    _DAT_0275b70c = CONCAT44(DAT_0275b710,fVar7);
    fVar7 = DAT_0275b710;
    if (DAT_0275b710 <= DAT_0275b714) {
      fVar7 = DAT_0275b714;
    }
    if (fVar7 <= DAT_0275b718) {
      fVar7 = DAT_0275b718;
    }
    _DAT_0275b71c = CONCAT44(DAT_0275b720,fVar7);
    fVar7 = DAT_0275b720;
    if (DAT_0275b720 <= DAT_0275b724) {
      fVar7 = DAT_0275b724;
    }
    if (fVar7 <= DAT_0275b728) {
      fVar7 = DAT_0275b728;
    }
    _DAT_0275b72c = CONCAT44(DAT_0275b730,fVar7);
    fVar7 = DAT_0275b730;
    if (DAT_0275b730 <= DAT_0275b734) {
      fVar7 = DAT_0275b734;
    }
    if (fVar7 <= DAT_0275b738) {
      fVar7 = DAT_0275b738;
    }
    _DAT_0275b73c = CONCAT44(DAT_0275b740,fVar7);
    fVar7 = DAT_0275b740;
    if (DAT_0275b740 <= DAT_0275b744) {
      fVar7 = DAT_0275b744;
    }
    if (fVar7 <= DAT_0275b748) {
      fVar7 = DAT_0275b748;
    }
    _DAT_0275b74c = CONCAT44(DAT_0275b750,fVar7);
    DAT_0275b75c = DAT_0275b750;
    if (DAT_0275b750 <= DAT_0275b754) {
      DAT_0275b75c = DAT_0275b754;
    }
    if (DAT_0275b75c <= DAT_0275b758) {
      DAT_0275b75c = DAT_0275b758;
    }
  }
  return (&DAT_0275b5e0)[(long)param_1 * 4];
}


