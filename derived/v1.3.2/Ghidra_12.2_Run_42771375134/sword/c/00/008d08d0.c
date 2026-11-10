/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d08d0; name: FUN_008d08d0
 */


void FUN_008d08d0(long param_1,int param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_f8 [2];
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  long local_58;
  long local_48;
  
  if (param_2 == 0) {
    *(byte *)(*(long *)(param_1 + 0x18) + 0x58) = *(byte *)(*(long *)(param_1 + 0x18) + 0x58) & 0xfe
    ;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x10);
    lVar5 = *(long *)(lVar4 + 0x1b0);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    lVar3 = *(long *)(lVar5 + 0x2e0);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    uVar2 = FUN_00ff9390(param_1);
    local_70 = 0x5df1eeb2ecf00a22;
    local_68 = "common/bag.dat";
    local_60 = 0xe;
    local_58 = 0;
    FUN_00ff8620(&local_48,uVar2,&local_70,10);
    lVar5 = *(long *)(local_48 + 0x60);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f8[1] = 0;
    local_e8 = (code *)0x0;
    FUN_0168c190(*(undefined8 *)(param_1 + 0x28),param_2,0,local_f8 + 1);
    pcVar1 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f8[1] = 0;
      local_e8 = (code *)0x0;
      (*pcVar1)(&local_d0);
    }
    local_f8[0] = lVar5;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    FUN_008cf360(lVar4,param_1 + 0x20,local_f8,&DAT_02146a28,0,param_2,1);
    if (local_f8[0] != 0) {
      (**(code **)(*(long *)(local_f8[0] + 0x48) + 0x18))();
      local_f8[0] = 0;
    }
    *(byte *)(*(long *)(param_1 + 0x18) + 0x58) = *(byte *)(*(long *)(param_1 + 0x18) + 0x58) | 1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
  }
  return;
}


