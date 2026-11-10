/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00935240; name: FUN_00935240
 */


undefined8 FUN_00935240(long param_1,ulong param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = FUN_008ef450(param_2 & 0xffffffff);
  lVar3 = 0;
  if (((int)param_4 < 0x18) && ((uVar1 & 1) != 0)) {
    lVar3 = *(long *)(param_1 + (param_2 & 0xff) * 0x300 + (ulong)param_4 * 0x20 + 8);
  }
  uVar1 = FUN_008ef450((ulong)param_3);
  uVar2 = 0;
  if ((((int)param_4 < 0x18) && ((uVar1 & 1) != 0)) && (uVar2 = 0, lVar3 != 0)) {
    lVar4 = *(long *)(param_1 + ((ulong)param_3 & 0xff) * 0x300 + (ulong)param_4 * 0x20 + 8);
    if (lVar4 != 0) {
      uVar1 = FUN_00935550(lVar3);
      if (((uVar1 & 1) == 0) && (uVar1 = FUN_00935550(lVar4), (uVar1 & 1) == 0)) {
        uVar2 = 0;
      }
      else {
        FUN_00935460(lVar3,lVar4);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


