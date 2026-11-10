/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb5380; name: FUN_00bb5380
 */


void FUN_00bb5380(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_38;
  
  if (*(int *)(param_1 + 0x5cc) != 3) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x2b0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_38 = 0xa101d45e601b4134;
  FUN_0167b9b0(lVar3,&local_38,1);
  FUN_00bb6fe0(param_1,0x69bb3bcd1460e220,0x2d58ef01f5708ff5);
  uVar1 = FUN_00bcb370(param_1,0);
  if ((uVar1 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x2b0);
    if (lVar4 == 0) {
      local_38 = 0xdb854d9d4f01fafb;
      FUN_0167b9b0(0,&local_38,0);
      goto joined_r0x00bb54f0;
    }
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar2 = 0;
  }
  else {
    FUN_00bb6fe0(param_1,0x69bb3ccd1460e3d3,0xdb854d9d4f01fafb);
    lVar4 = *(long *)(param_1 + 0x2b0);
    if (lVar4 == 0) {
      local_38 = 0xdb854d9d4f01fafb;
      FUN_0167b9b0(0,&local_38,1);
      goto joined_r0x00bb54f0;
    }
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar2 = 1;
  }
  local_38 = 0xdb854d9d4f01fafb;
  FUN_0167b9b0(lVar4,&local_38,uVar2);
  (**(code **)(*plVar5 + 0x18))(plVar5);
joined_r0x00bb54f0:
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


