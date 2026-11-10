/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da09e0; name: FUN_00da09e0
 */


long FUN_00da09e0(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_40;
  long local_38;
  
  if (*(long *)(param_1 + (long)param_2 * 0x58 + 0x90) == 0) {
    lVar4 = 0;
  }
  else {
    lVar5 = *(long *)(param_1 + (long)param_2 * 0x58 + 0x70);
    lVar4 = lVar5 + 0x20;
    uVar1 = FUN_006e2fe0(lVar5 + 0x140);
    if ((((uVar1 & 1) == 0) && (lVar3 = *(long *)(lVar5 + 0x38), lVar3 != 0)) &&
       (*(char *)(lVar3 + 0x170) != '\0')) {
      FUN_006e2db0(&local_40,lVar3,*(undefined8 *)(lVar3 + 400));
      lVar3 = local_38;
      *(undefined8 *)(lVar5 + 0x140) = local_40;
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
      }
      lVar2 = *(long *)(lVar5 + 0x148);
      *(long *)(lVar5 + 0x148) = lVar3;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
    }
  }
  return lVar4;
}


