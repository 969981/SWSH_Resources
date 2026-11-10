/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007299d0; name: FUN_007299d0
 */


void FUN_007299d0(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_48;
  int local_3c;
  undefined1 auStack_38 [8];
  
  lVar3 = *(long *)(param_3 + 8);
  lVar2 = *(long *)(param_3 + 0x20);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (lVar3 < -0xfc6d48c7846dba1) {
    if (lVar3 < -0x437b2bcfbf35b4a2) {
      if (lVar3 == -0x5ac36e4631b31c05) {
        lVar3 = 0x260bab0;
      }
      else if (lVar3 == -0x583687a497cb1451) {
        lVar3 = 0x260bb30;
      }
      else {
        if (lVar3 != -0x48a9998249434bc1) goto LAB_00729cb0;
        lVar3 = 0x260baf0;
      }
    }
    else if (lVar3 == -0x437b2bcfbf35b4a2) {
      lVar3 = 0x260bb10;
    }
    else if (lVar3 == -0x314cdd465db6dada) {
      lVar3 = 0x260b9d0;
    }
    else {
      if (lVar3 != -0x314695465db1f4d4) goto LAB_00729cb0;
      lVar3 = 0x260b9f0;
    }
  }
  else if (lVar3 < 0xd89318003f83896) {
    if (lVar3 == -0xfc6d48c7846dba1) {
      lVar3 = 0x260ba30;
    }
    else if (lVar3 == -0xfc0048c78410e83) {
      lVar3 = 0x260ba10;
    }
    else {
      if (lVar3 != 0x180eb169eb336e5) goto LAB_00729cb0;
      lVar3 = 0x260ba50;
    }
  }
  else if (lVar3 < 0x13e9325efccbafab) {
    if (lVar3 == 0xd89318003f83896) {
      lVar3 = 0x260bb50;
    }
    else {
      if (lVar3 != 0x13beb5548ad69525) {
LAB_00729cb0:
        *param_1 = 0;
        goto joined_r0x00729c88;
      }
      lVar3 = 0x260ba90;
    }
  }
  else if (lVar3 == 0x13e9325efccbafab) {
    lVar3 = 0x260bad0;
  }
  else {
    if (lVar3 != 0x73457ac941aa4b35) goto LAB_00729cb0;
    lVar3 = 0x260ba70;
  }
  uVar1 = *(uint *)(lVar3 + 0x18);
  local_3c = 0;
  if ((uVar1 & 0xf) != 0) {
    local_3c = 0x10 - (uVar1 & 0xf);
  }
  local_3c = local_3c + uVar1;
  local_48 = *(undefined8 *)(param_2 + 0x10);
  lVar3 = FUN_00729cd0(auStack_38,*(undefined8 *)(param_2 + 8),&local_3c,param_2 + 0x18,&local_48);
  *param_1 = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
joined_r0x00729c88:
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


