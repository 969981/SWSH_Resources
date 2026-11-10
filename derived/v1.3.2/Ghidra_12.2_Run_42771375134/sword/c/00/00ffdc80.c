/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffdc80; name: FUN_00ffdc80
 */


undefined8 FUN_00ffdc80(long param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *local_40;
  ulong uStack_38;
  undefined8 local_28;
  
  uVar5 = 0xcbf29ce484222645;
  bVar1 = *param_2;
  while (bVar1 != 0) {
    param_2 = param_2 + 1;
    uVar5 = (uVar5 ^ bVar1) * 0x100000001b3;
    bVar1 = *param_2;
  }
  if (*(long *)(param_1 + 0x3c0) == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x58);
    uVar4 = 0;
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      (**(code **)(*plVar3 + 0x18))(plVar3);
      lVar2 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x58);
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      local_40 = &local_28;
      local_28 = 0;
      uStack_38 = uVar5;
      FUN_010004d0(lVar2,&local_40,0);
      uVar4 = local_28;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      }
    }
  }
  return uVar4;
}


