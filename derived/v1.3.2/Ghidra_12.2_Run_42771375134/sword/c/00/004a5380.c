/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a5380; name: FUN_004a5380
 */


void FUN_004a5380(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  uVar3 = 1L << ((ulong)param_4 & 0x3f);
  lVar2 = *(long *)(param_3 + 8);
  uVar1 = *(uint *)(lVar2 + 0x18);
  if ((*(ulong *)(lVar2 + 8) & uVar3) == 0) {
    if (uVar1 != 0) {
      puVar4 = (undefined8 *)(*(long *)(lVar2 + 0x10) + 0x38);
      lVar2 = (ulong)uVar1 << 6;
      do {
        if ((puVar4[-1] & uVar3) != 0) {
          (**(code **)(*(long *)*puVar4 + 0x10))(param_1,param_2,(long *)*puVar4,param_4);
        }
        puVar4 = puVar4 + 8;
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
  }
  else if (uVar1 != 0) {
    lVar5 = (ulong)uVar1 << 6;
    puVar4 = (undefined8 *)(*(long *)(lVar2 + 0x10) + 0x38);
    do {
      (**(code **)(*(long *)*puVar4 + 0x10))(param_1,param_2,(long *)*puVar4,param_4);
      lVar5 = lVar5 + -0x40;
      puVar4 = puVar4 + 8;
    } while (lVar5 != 0);
  }
  return;
}


