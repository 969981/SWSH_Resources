/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bfac0; name: FUN_003bfac0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_003bfac0(float param_1,long param_2,ulong param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  
  if ((0.0 < param_1) || ((param_3 & 1) != 0)) {
    FUN_00113df0(*(undefined8 *)(*(long *)(param_2 + 0x48) + 0x748),*(undefined4 *)(param_2 + 0xb0))
    ;
    return;
  }
  lVar6 = *(long *)(param_2 + 0x50);
  pfVar5 = (float *)0x0;
  if (*(long *)(lVar6 + 0xb0) != 0) {
    uVar4 = FUN_003be9f0(lVar6,0);
    if ((uVar4 & 1) == 0) {
      pfVar5 = (float *)0x0;
      fVar7 = *(float *)(lVar6 + 0x50);
      goto joined_r0x003bfb04;
    }
    pfVar5 = *(float **)(lVar6 + 0xb0);
  }
  fVar7 = *(float *)(lVar6 + 0x50);
joined_r0x003bfb04:
  if ((((fVar7 == 0.0) && (*(float *)(lVar6 + 0x54) == 0.0)) && (*(float *)(lVar6 + 0x58) == 0.0))
     && ((*(float *)(lVar6 + 0x60) == 0.0 && (*(float *)(lVar6 + 100) == 0.0)))) {
    bVar2 = *(float *)(lVar6 + 0x68) == 0.0;
  }
  else {
    bVar2 = false;
  }
  bVar1 = *(byte *)(param_2 + 0xb6);
  bVar3 = (bool)(bVar2 & (bVar1 & 2) == 0);
  if (((bVar1 >> 1 & 1) != 0) && (bVar2)) {
    if (pfVar5 == (float *)0x0) {
      bVar3 = true;
    }
    else {
      if (*pfVar5 != 0.0) {
        return;
      }
      if (pfVar5[1] != 0.0) {
        return;
      }
      if (pfVar5[2] != 0.0) {
        return;
      }
      if (pfVar5[4] != 0.0) {
        return;
      }
      if (pfVar5[5] != 0.0) {
        return;
      }
      bVar3 = pfVar5[6] == 0.0;
    }
  }
  if (((bVar1 >> 2 & 1) == 0) || (bVar2 = !bVar3, bVar3 = false, bVar2)) {
    if (!(bool)((bVar1 & 4) == 0 & bVar3)) {
      return;
    }
  }
  else if (pfVar5 != (float *)0x0) {
    if (pfVar5[8] != 0.0) {
      return;
    }
    if (pfVar5[9] != 0.0) {
      return;
    }
    if (pfVar5[10] != 0.0) {
      return;
    }
    if (pfVar5[0xc] != 0.0) {
      return;
    }
    if (pfVar5[0xd] != 0.0) {
      return;
    }
    if (pfVar5[0xe] != 0.0) {
      return;
    }
  }
  if (*(long *)(param_2 + 0xc0) == 0) {
    FUN_00113e30(*(undefined8 *)(*(long *)(param_2 + 0x48) + 0x748),*(undefined4 *)(param_2 + 0xb0))
    ;
    return;
  }
  return;
}


