/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00488880; name: FUN_00488880
 */


void FUN_00488880(long param_1,long *param_2,undefined8 param_3,uint *param_4,uint *param_5,
                 undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  
  do {
    lVar1 = param_1;
    param_1 = *(long *)(lVar1 + 0x78);
  } while (*(long *)(lVar1 + 0x78) != 0 && (*(uint *)(lVar1 + 0x98) & 0xffe) == 0);
  *param_5 = *(uint *)(lVar1 + 0x9c) >> 0x16 & 3;
  lVar2 = *(long *)(lVar1 + 0x68);
  if (lVar2 != 0) {
    lVar3 = *param_2;
    if (lVar3 == 0) {
      lVar3 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x58);
      if (lVar3 == 0) {
        *param_2 = 0;
        goto LAB_00488918;
      }
      FUN_00462f00(lVar3);
      *param_2 = lVar3;
      lVar2 = *(long *)(lVar1 + 0x68);
    }
    memcpy((void *)(lVar3 + 8),(void *)(lVar2 + 8),0x50);
  }
LAB_00488918:
  *param_4 = *(uint *)(lVar1 + 0x9c) >> 0x14 & 3;
  if ((((*(byte *)(lVar1 + 0x9e) >> 3 & 1) != 0) && (*(long *)(lVar1 + 0x38) != 0)) &&
     (*(char *)(*(long *)(lVar1 + 0x38) + 2) < '\0')) {
    fVar4 = (float)FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,lVar1 + 0x30,0x17,param_3);
    *param_4 = (int)fVar4;
  }
  FUN_00488220(lVar1,param_3,param_6);
  return;
}


