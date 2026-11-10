/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011dc120; name: FUN_011dc120
 */


void FUN_011dc120(long *param_1,long *param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  puVar3 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar3 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar6 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  puVar1 = PTR_DAT_027152a8 + 0x50;
  puVar2 = PTR_DAT_027152a8 + 0x90;
  *param_1 = (long)(PTR_DAT_027152a8 + 0x10);
  param_1[1] = lVar6;
  param_1[9] = (long)puVar1;
  plVar7 = param_1 + 10;
  *plVar7 = (long)puVar2;
  param_1[0xb] = 0;
  FUN_011c6cf0(param_1 + 0xb,plVar7);
  puVar1 = PTR_DAT_02725a80;
  *param_1 = (long)(PTR_DAT_02725a80 + 0x10);
  param_1[9] = (long)(puVar1 + 0x90);
  *plVar7 = (long)(puVar1 + 0xd0);
  param_1[0xe] = (long)(puVar1 + 0x148);
  param_1[0xf] = (long)param_2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xc] = (long)(puVar1 + 0xf8);
  param_1[0xd] = (long)(puVar1 + 0x118);
  *(undefined2 *)((long)param_1 + 0xc6) = 0;
  *(undefined8 *)((long)param_1 + 0xbe) = 0;
  *(undefined8 *)((long)param_1 + 0xb6) = 0;
  *(undefined8 *)((long)param_1 + 0xae) = 0;
  *(undefined8 *)((long)param_1 + 0xa6) = 0;
  *(undefined8 *)((long)param_1 + 0x9e) = 0;
  *(undefined8 *)((long)param_1 + 0x96) = 0;
  *(undefined8 *)((long)param_1 + 0x8e) = 0;
  *(undefined8 *)((long)param_1 + 0x86) = 0;
  *(undefined2 *)((long)param_1 + 0x84) = 0xfc18;
  FUN_007d3f80(param_1 + 0x1a,param_2,param_3);
  plVar7 = (long *)param_1[0xf];
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar7;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,0x290,0x10);
  if (lVar6 == 0) {
    (**(code **)(*plVar7 + 0xb8))(plVar7);
  }
  FUN_007a1ac0(lVar6,param_1[0xf]);
  *(long **)(lVar6 + 8) = plVar7;
  *(long *)(lVar6 + 0x10) = lVar6;
  *(undefined8 *)(lVar6 + 0x18) = 0x290;
  *(undefined8 *)(lVar6 + 0x20) = 0x10;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  param_1[0x54] = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))((long *)(lVar6 + 0x48));
  }
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x5a] = (long)param_2;
  param_1[0x5b] = 0x7ffffffffffffff;
  param_1[0x60] = 0;
  param_1[0x62] = (long)param_2;
  param_1[99] = 0x7ffffffffffffff;
  param_1[0x68] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  uVar5 = (**(code **)(*param_2 + 0x10))(param_2,0x800,8);
  FUN_009b6980(param_1 + 0x62,uVar5,0x40,param_1[0x6a] + param_1[0x6b] * 0x20,0,0);
  *(ushort *)((long)param_1 + 0x372) = (ushort)param_3 & 0xff;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined1 *)((long)param_1 + 0x374) = 1;
  return;
}


