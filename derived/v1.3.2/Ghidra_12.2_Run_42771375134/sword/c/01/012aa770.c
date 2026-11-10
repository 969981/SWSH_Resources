/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012aa770; name: FUN_012aa770
 */


void FUN_012aa770(long *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  bool bVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [200];
  
  FUN_01843e50();
  plVar1 = param_1 + 5;
  puVar2 = PTR_DAT_02727340 + 0x10;
  *(undefined1 *)((long)param_1 + 9) = 0;
  *param_1 = (long)puVar2;
  FUN_017e35a0(plVar1,0,0);
  puVar2 = PTR_DAT_02727348;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  FUN_017e3870(plVar1);
  *(undefined4 *)(param_1 + 3) = *param_2;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2[1];
  *(undefined4 *)(param_1 + 4) = param_2[2];
  *(undefined4 *)((long)param_1 + 0x24) = param_2[3];
  FUN_012ab9a0(auStack_110,param_3,param_4);
  uVar5 = FUN_01210290(auStack_110);
  if ((uVar5 & 1) != 0) {
    local_120 = (undefined1 *)0x0;
    local_118 = (undefined1 *)0x0;
    local_128 = (undefined1 *)0x0;
    puVar6 = (undefined1 *)FUN_017cd750(200);
    puVar4 = local_128;
    local_118 = puVar6 + 200;
    puVar8 = puVar6;
    if (local_120 != local_128) {
      lVar7 = (long)local_128 - (long)local_120;
      do {
        puVar8 = puVar8 + -1;
        local_120 = local_120 + -1;
        *puVar8 = *local_120;
      } while (local_128 != local_120);
      puVar8 = puVar6 + lVar7;
    }
    bVar3 = local_128 != (undefined1 *)0x0;
    local_128 = puVar8;
    local_120 = puVar6;
    if (bVar3) {
      FUN_017cd7a0(puVar4);
    }
    FUN_012a9210(&local_128,local_128,auStack_108,auStack_108 + 200);
    FUN_017e3870(plVar1);
    FUN_017e3980(plVar1,local_128,(long)local_120 - (long)local_128);
    if (local_128 != (undefined1 *)0x0) {
      local_120 = local_128;
      FUN_017cd7a0();
    }
  }
  return;
}


