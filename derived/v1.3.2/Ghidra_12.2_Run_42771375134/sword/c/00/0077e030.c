/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077e030; name: FUN_0077e030
 */


void FUN_0077e030(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ushort local_40;
  undefined6 uStack_3e;
  undefined4 local_38;
  
  puVar3 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar3 = PTR_DAT_02716210;
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar6 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = param_3;
  param_1[0xb] = 0;
  param_1[0xc] = -0x340d631b7bddd9bb;
  param_1[9] = (long)(puVar3 + 0x48);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = lVar6;
  param_1[0xd] = (long)&DAT_01d38550;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = (long)(PTR_DAT_02710ad0 + 0x10);
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x38) = 1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  FUN_0077e570(param_1,param_2,0,&local_40,0xc);
  puVar5 = (undefined8 *)
           (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],(ulong)local_40 * 4 + 0xc,8)
  ;
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar5 + 1) = local_38;
    *puVar5 = CONCAT62(uStack_3e,local_40);
    FUN_0077e570(param_1,param_2,0xc,(long)puVar5 + 0xc,(ulong)local_40 << 2);
  }
  param_1[0x12] = (long)puVar5;
  plVar1 = param_1 + 0xb;
  FUN_006e4c50(plVar1,param_2);
  uVar2 = *(uint *)PTR_DAT_02716218;
  if (*(ushort *)param_1[0x12] <= uVar2) {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0x11) = uVar2;
  if (*(int *)((long)param_1 + 0x54) == 0) {
    param_1[0x13] = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)param_1[1] + 0x10))
                      ((long *)param_1[1],*(undefined4 *)((ushort *)param_1[0x12] + 2),8);
    param_1[0x13] = lVar4;
    uVar7 = (ulong)*(uint *)(param_1[0x12] + (ulong)*(uint *)(param_1 + 0x11) * 4 + 0xc);
    if ((char)param_1[0x38] != '\0') {
      FUN_0077e570(param_1,plVar1,uVar7,lVar4,4);
      FUN_0077e570(param_1,plVar1,uVar7,(undefined4 *)param_1[0x13],*(undefined4 *)param_1[0x13]);
      return;
    }
    param_1[0x13] = uVar7 + param_1[0x12];
  }
  return;
}


