/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014746a0; name: FUN_014746a0
 */


void FUN_014746a0(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  long *plVar5;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  *(int *)(param_1 + 0x718) = param_2;
  FUN_00ff86a0(&local_68,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar3 = *(long *)(local_68 + 0x60);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  lVar1 = param_1 + 0x100;
  lVar2 = FUN_00ffda40(lVar1,&DAT_0216df80 +
                             (ulong)*(uint *)(*(long *)(param_1 + 0x5d0) + 0x10) * 0x28);
  if (param_2 == 0) {
    *(undefined8 *)(lVar2 + 0xe0) =
         *(undefined8 *)(&DAT_0216df90 + (ulong)*(uint *)(*(long *)(param_1 + 0x5d0) + 0x10) * 0x28)
    ;
    local_70 = lVar3;
    if (lVar3 == 0) {
      FUN_01473330(param_1,0x48db2390989868df,0xc8d53af1bf4076d3,&local_70);
      bVar4 = 0;
    }
    else {
      plVar5 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_01473330(param_1,0x48db2390989868df,0xc8d53af1bf4076d3,&local_70);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      bVar4 = 0;
      local_70 = 0;
    }
  }
  else {
    *(undefined8 *)(lVar2 + 0xe0) = 0xcbf29ce484222645;
    local_88 = lVar3;
    local_80 = lVar3;
    local_78 = lVar3;
    if (lVar3 == 0) {
      FUN_01473330(param_1,0x80d62774140a6c69,0x31bd594fa8f17ec,&local_78);
      FUN_01473330(param_1,0x80d62674140a6ab6,0x86a22e2278794cc3,&local_80);
      FUN_01473330(param_1,0x80d62574140a6903,0xc8d53af1bf4076d3,&local_88);
    }
    else {
      plVar5 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_01473330(param_1,0x80d62774140a6c69,0x31bd594fa8f17ec,&local_78);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      local_78 = 0;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_01473330(param_1,0x80d62674140a6ab6,0x86a22e2278794cc3,&local_80);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      local_80 = 0;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_01473330(param_1,0x80d62574140a6903,0xc8d53af1bf4076d3,&local_88);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      local_88 = 0;
    }
    bVar4 = 1;
  }
  local_68 = -0x5d97fa37436ab1ca;
  lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_68);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | bVar4;
  local_68 = -0x5d97fb37436ab37d;
  lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_68);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | bVar4;
  local_68 = -0x5d97f537436aa94b;
  lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_68);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | bVar4;
  local_68 = -0x5d97f837436aae64;
  lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_68);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | bVar4 ^ 1;
  FUN_01476160(param_1,param_2);
  if (param_2 == 0) {
    FUN_00ffd600(lVar1,&UNK_0216df98 + (ulong)*(uint *)(*(long *)(param_1 + 0x5d0) + 0x10) * 0x28);
    FUN_00ffd510(lVar1,&UNK_0216df98 + (ulong)*(uint *)(*(long *)(param_1 + 0x5d0) + 0x10) * 0x28);
  }
  local_68 = -0x5568b94f2d6f6c4a;
  FUN_00a0e830(*(undefined8 *)(param_1 + 0x2b0),&local_68);
  FUN_019a65b0();
  FUN_01476200(param_1);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


