/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066e430; name: FUN_0066e430
 */


undefined8 FUN_0066e430(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long local_58;
  
  if (*(ulong *)(param_1 + 0x18) == param_2) {
    uVar3 = 1;
  }
  else if (param_2 == 0) {
    if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
       (local_58 = *(long *)(param_1 + 0x28), local_58 != 0)) {
      FUN_0066def0(*(undefined8 *)(param_1 + 8),&local_58,
                   "../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar3 = 1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(long *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x10);
    lVar4 = FUN_0066e590(*(undefined8 *)(param_1 + 8),param_2,0x10,
                         "../../../../Include\\SiCore/SiCore_Array.h",0x5d1);
    uVar2 = param_2;
    if (uVar6 <= param_2) {
      uVar2 = uVar6;
    }
    uVar3 = 0;
    if (lVar4 != 0) {
      if ((uVar2 != 0) && ((param_3 & 1) != 0)) {
        lVar5 = 0;
        uVar6 = 0;
        do {
          lVar1 = *(long *)(param_1 + 0x28) + lVar5;
          FUN_005c80d0(lVar4 + lVar5,lVar1);
          FUN_005c80d0(lVar4 + lVar5 + 0x30,lVar1 + 0x30);
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + 0x60;
        } while (uVar6 < uVar2);
      }
      if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
         (local_58 = *(long *)(param_1 + 0x28), local_58 != 0)) {
        FUN_0066def0(*(undefined8 *)(param_1 + 8),&local_58,
                     "../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
      uVar3 = 1;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(long *)(param_1 + 0x28) = lVar4;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(ulong *)(param_1 + 0x10) = uVar2;
      *(ulong *)(param_1 + 0x18) = param_2;
    }
  }
  return uVar3;
}


