/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01508130; name: FUN_01508130
 */


ulong FUN_01508130(long param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  long *plVar8;
  long local_48;
  
  plVar1 = (long *)(param_1 + 0x50a60);
  if (*plVar1 == 0) {
    uVar6 = 0x20;
  }
  else {
    uVar2 = FUN_01509eb0();
    uVar6 = (ulong)uVar2;
    if (uVar2 < 0x1f) {
      uVar7 = 0;
      do {
        local_48 = *param_2;
        if (local_48 == 0) {
          iVar3 = FUN_015073c0(param_1,uVar7,&local_48,1);
        }
        else {
          plVar8 = (long *)(local_48 + 0x48);
          (**(code **)(*plVar8 + 0x10))(plVar8);
          iVar3 = FUN_015073c0(param_1,uVar7,&local_48,1);
          (**(code **)(*plVar8 + 0x18))(plVar8);
          local_48 = 0;
        }
      } while ((iVar3 != 0) && (uVar7 = uVar7 + 1, uVar7 < 0x20));
      if (uVar2 <= uVar7) {
        if (uVar7 < 0x18) {
          lVar4 = *plVar1;
          if (uVar7 < 0x10) {
            uVar5 = 0x10;
          }
          else {
            uVar5 = 0x18;
          }
        }
        else {
          lVar4 = *plVar1;
          uVar5 = 0x20;
        }
        FUN_0150b1a0(lVar4,uVar5);
      }
      uVar6 = FUN_01509eb0(*plVar1);
      return uVar6;
    }
  }
  return uVar6;
}


