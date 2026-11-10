/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010bad80; name: FUN_010bad80
 */


void FUN_010bad80(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x288);
  if (lVar2 == 0) {
    uVar1 = FUN_014fbbd0(0);
  }
  else {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar1 = FUN_014fbbd0(lVar2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((uVar1 & 1) != 0) {
    FUN_010bc320(param_1,0x820bd8ff88566a13,0,1,1,0);
    *(undefined4 *)(param_1 + 0x7c) = 0x22;
    FUN_010bc6f0(param_1,0,1);
    return;
  }
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  local_68 = DAT_02163b08;
  uStack_60 = DAT_02163b10;
  local_58 = DAT_02163b18;
  uStack_50 = DAT_02163b20;
  local_48 = DAT_02163b28;
  uStack_40 = DAT_02163b30;
  local_38 = DAT_02163b38;
  plVar4 = (long *)(**(code **)*puVar3)(puVar3);
  lVar2 = FUN_010aad10();
  for (; plVar4 != (long *)lVar2; plVar4 = (long *)*plVar4) {
  }
  *(undefined1 *)(puVar3 + 0x10) = 1;
  FUN_0077eb10(puVar3[0x18],&local_68,puVar3[0x11]);
  puVar3[9] = puVar3[0x11];
  FUN_0077eb10(puVar3[0x18],&uStack_60,puVar3[0x12]);
  puVar3[10] = puVar3[0x12];
  FUN_0077eb10(puVar3[0x18],&local_58,puVar3[0x13]);
  puVar3[0xb] = puVar3[0x13];
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  FUN_010bc320(param_1,0x3d116782b196eef7,1,0,1,0);
  *(undefined4 *)(param_1 + 0x7c) = 0x1c;
  return;
}


