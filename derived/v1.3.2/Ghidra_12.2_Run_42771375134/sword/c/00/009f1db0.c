/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009f1db0; name: FUN_009f1db0
 */


void FUN_009f1db0(long param_1,ushort param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_58;
  
  uVar1 = (uint)param_2;
  if (uVar1 < *(ushort *)(param_1 + 0x5da)) {
    if ((uVar1 < 10) && (9 < *(ushort *)(param_1 + 0x5da))) {
      local_58 = 0x7470444812d64c3c;
      FUN_00ffd010(param_1 + 0x100,&local_58);
    }
    *(ushort *)(param_1 + 0x5da) = param_2;
    FUN_00ff86a0(&local_58,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
    lVar2 = *(long *)(local_58 + 0x60);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    lVar5 = *(long *)(param_1 + 0x2b0);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)(lVar5 + 0x2e8);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    lVar5 = *(long *)(param_1 + 0x2b0);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    lVar6 = *(long *)(lVar5 + 0x2e0);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    local_58 = -0x2fa53059f1078176;
    FUN_0077eb10(lVar2,&local_58,lVar4);
    FUN_014ca220(lVar6,0,(ulong)(uint)param_2 / 0x3c,2,2,1);
    FUN_014ca220(lVar6,1,uVar1 + (param_2 / 0x3c) * -0x3c,2,2,1);
    lVar5 = *(long *)(param_1 + 0x2b0);
    if (lVar5 == 0) {
      local_58 = 0x10e1f79c6aac614b;
      FUN_0167cce0(0,&local_58,10);
    }
    else {
      plVar3 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      local_58 = 0x10e1f79c6aac614b;
      FUN_0167cce0(lVar5,&local_58,10);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
  }
  return;
}


