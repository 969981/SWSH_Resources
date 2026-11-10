/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e09f0; name: FUN_009e09f0
 */


void FUN_009e09f0(long param_1,uint param_2,undefined8 param_3,long *param_4,uint param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar3 = PTR_DAT_02718ad8;
  *(uint *)(PTR_DAT_02718ad8 + 0xa0) = param_2 & 0xff;
  *(long *)puVar3 = param_1;
  *(undefined8 *)(puVar3 + 8) = param_3;
  *(long **)(puVar3 + 0x98) = param_4;
  *(undefined2 *)(puVar3 + 0xa6) = 0;
  *(ushort *)(puVar3 + 0xa4) = (ushort)(param_1 == 0);
  puVar2 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_009e0f74:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_4;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar5 = (**(code **)(*param_4 + 0x10))(param_4,0x250,0x10);
  if (lVar5 == 0) {
    (**(code **)(*param_4 + 0xb8))(param_4);
  }
  FUN_014c5f50(lVar5,0x14,0x40,param_4);
  *(long **)(lVar5 + 8) = param_4;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(undefined8 *)(lVar5 + 0x18) = 0x250;
  *(undefined8 *)(lVar5 + 0x20) = 0x10;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (*(long *)(puVar3 + 0x10) != 0) {
    (**(code **)(*(long *)(*(long *)(puVar3 + 0x10) + 0x48) + 0x18))();
    *(undefined8 *)(puVar3 + 0x10) = 0;
  }
  *(long *)(puVar3 + 0x10) = lVar5;
  *(undefined1 *)(lVar5 + 0x228) = 1;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_009e0f74;
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_4;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar5 = (**(code **)(*param_4 + 0x10))(param_4,0x80,8);
  if (lVar5 == 0) {
    (**(code **)(*param_4 + 0xb8))(param_4);
  }
  FUN_0077d050(lVar5,0x640);
  *(long **)(lVar5 + 8) = param_4;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(undefined8 *)(lVar5 + 0x18) = 0x80;
  *(undefined8 *)(lVar5 + 0x20) = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (*(long *)(puVar3 + 0x18) != 0) {
    (**(code **)(*(long *)(*(long *)(puVar3 + 0x18) + 0x48) + 0x18))();
    *(undefined8 *)(puVar3 + 0x18) = 0;
  }
  uVar1 = *(undefined4 *)puVar2;
  *(long *)(puVar3 + 0x18) = lVar5;
  lVar4 = nn::os::GetTlsValue(uVar1);
  if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_009e0f74;
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_4;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar5 = (**(code **)(*param_4 + 0x10))(param_4,0x80,8);
  if (lVar5 == 0) {
    (**(code **)(*param_4 + 0xb8))(param_4);
  }
  FUN_0077d050(lVar5,0x640);
  *(long **)(lVar5 + 8) = param_4;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(undefined8 *)(lVar5 + 0x18) = 0x80;
  *(undefined8 *)(lVar5 + 0x20) = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (*(long *)(puVar3 + 0x20) != 0) {
    (**(code **)(*(long *)(*(long *)(puVar3 + 0x20) + 0x48) + 0x18))();
    *(undefined8 *)(puVar3 + 0x20) = 0;
  }
  *(long *)(puVar3 + 0x20) = lVar5;
  if ((param_5 & 1) == 0) {
    lVar4 = FUN_009e3950(auStack_48,param_4);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    FUN_014bc440(lVar4,&DAT_02a50830,0);
    if (*(long *)(puVar3 + 0x28) != 0) {
      (**(code **)(*(long *)(*(long *)(puVar3 + 0x28) + 0x48) + 0x18))();
      *(undefined8 *)(puVar3 + 0x28) = 0;
    }
    *(long *)(puVar3 + 0x28) = lVar4;
    *(undefined8 *)(puVar3 + 0x50) = 0;
    lVar4 = FUN_009e3950(auStack_48,param_4);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    FUN_014bc440(lVar4,&DAT_02a50850,0);
    if (*(long *)(puVar3 + 0x30) != 0) {
      (**(code **)(*(long *)(*(long *)(puVar3 + 0x30) + 0x48) + 0x18))();
      *(undefined8 *)(puVar3 + 0x30) = 0;
    }
    *(long *)(puVar3 + 0x30) = lVar4;
    *(undefined8 *)(puVar3 + 0x58) = 0;
    lVar4 = FUN_009e3950(auStack_48,param_4);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    FUN_014bc440(lVar4,&DAT_02a50870,0);
    if (*(long *)(puVar3 + 0x38) != 0) {
      (**(code **)(*(long *)(*(long *)(puVar3 + 0x38) + 0x48) + 0x18))();
      *(undefined8 *)(puVar3 + 0x38) = 0;
    }
    *(long *)(puVar3 + 0x38) = lVar4;
    *(undefined8 *)(puVar3 + 0x60) = 0;
    lVar4 = FUN_009e3950(auStack_48,param_4);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    FUN_014bc440(lVar4,&DAT_02a50890,0);
    if (*(long *)(puVar3 + 0x40) != 0) {
      (**(code **)(*(long *)(*(long *)(puVar3 + 0x40) + 0x48) + 0x18))();
      *(undefined8 *)(puVar3 + 0x40) = 0;
    }
    *(long *)(puVar3 + 0x40) = lVar4;
    *(undefined8 *)(puVar3 + 0x68) = 0;
    lVar4 = FUN_009e3950(auStack_48,param_4);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    FUN_014bc440(lVar4,&DAT_02a508b0,0);
  }
  else {
    lVar4 = FUN_009e3950(auStack_50,param_4);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (*(long *)(puVar3 + 0x28) != 0) {
      (**(code **)(*(long *)(*(long *)(puVar3 + 0x28) + 0x48) + 0x18))();
      *(undefined8 *)(puVar3 + 0x28) = 0;
    }
    *(long *)(puVar3 + 0x28) = lVar4;
    *(undefined8 *)(puVar3 + 0x50) = 0;
    lVar4 = FUN_009e3950(auStack_50,param_4);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (*(long *)(puVar3 + 0x30) != 0) {
      (**(code **)(*(long *)(*(long *)(puVar3 + 0x30) + 0x48) + 0x18))();
      *(undefined8 *)(puVar3 + 0x30) = 0;
    }
    *(long *)(puVar3 + 0x30) = lVar4;
    *(undefined8 *)(puVar3 + 0x58) = 0;
    lVar4 = FUN_009e3950(auStack_50,param_4);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (*(long *)(puVar3 + 0x38) != 0) {
      (**(code **)(*(long *)(*(long *)(puVar3 + 0x38) + 0x48) + 0x18))();
      *(undefined8 *)(puVar3 + 0x38) = 0;
    }
    *(long *)(puVar3 + 0x38) = lVar4;
    *(undefined8 *)(puVar3 + 0x60) = 0;
    lVar4 = FUN_009e3950(auStack_50,param_4);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (*(long *)(puVar3 + 0x40) != 0) {
      (**(code **)(*(long *)(*(long *)(puVar3 + 0x40) + 0x48) + 0x18))();
      *(undefined8 *)(puVar3 + 0x40) = 0;
    }
    *(long *)(puVar3 + 0x40) = lVar4;
    *(undefined8 *)(puVar3 + 0x68) = 0;
    lVar4 = FUN_009e3950(auStack_50,param_4);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      lVar5 = *(long *)(puVar3 + 0x48);
      goto joined_r0x009e0f40;
    }
  }
  lVar5 = *(long *)(puVar3 + 0x48);
joined_r0x009e0f40:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    *(undefined8 *)(puVar3 + 0x48) = 0;
  }
  *(long *)(puVar3 + 0x48) = lVar4;
  *(undefined8 *)(puVar3 + 0x70) = 0;
  return;
}


