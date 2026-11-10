/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00732c50; name: FUN_00732c50
 */


void FUN_00732c50(long *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  FUN_00700120(param_1,1,0);
  puVar3 = PTR_DAT_02715c08;
  *param_1 = (long)(PTR_DAT_02715c08 + 0x10);
  param_1[9] = (long)(puVar3 + 0xb0);
  param_1[10] = (long)(puVar3 + 0xf0);
  lVar7 = *(long *)(param_2 + 0x20);
  param_1[0x16] = (long)(PTR_DAT_02715af8 + 0x10);
  lVar5 = *(long *)(lVar7 + 0xa8);
  param_1[0x17] = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  if (*(code **)(lVar7 + 0xc0) != (code *)0x0) {
    (**(code **)(lVar7 + 0xc0))(lVar7 + 0xd0,param_1 + 0x1c);
    lVar5 = *(long *)(lVar7 + 0xb0);
    lVar1 = *(long *)(lVar7 + 0xb8);
    lVar2 = *(long *)(lVar7 + 200);
    param_1[0x1a] = *(long *)(lVar7 + 0xc0);
    param_1[0x1b] = lVar2;
    param_1[0x18] = lVar5;
    param_1[0x19] = lVar1;
  }
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  if (*(code **)(lVar7 + 0x140) != (code *)0x0) {
    (**(code **)(lVar7 + 0x140))(lVar7 + 0x150,param_1 + 0x2c);
    lVar5 = *(long *)(lVar7 + 0x130);
    lVar1 = *(long *)(lVar7 + 0x138);
    lVar2 = *(long *)(lVar7 + 0x148);
    param_1[0x2a] = *(long *)(lVar7 + 0x140);
    param_1[0x2b] = lVar2;
    param_1[0x28] = lVar5;
    param_1[0x29] = lVar1;
  }
  param_1[0x16] = (long)(PTR_DAT_02715b00 + 0x10);
  lVar5 = *(long *)(param_2 + 0x20);
  param_1[0x38] = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(param_2 + 0x30);
  param_1[0x39] = lVar7;
  lVar5 = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    lVar5 = param_1[0x39];
  }
  *(int *)(param_1 + 0x3a) = param_3;
  *(undefined4 *)((long)param_1 + 0x1d4) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 1;
  *(undefined4 *)((long)param_1 + 0x1dc) = 0;
  uVar6 = FUN_0072e500(lVar5,param_3);
  if ((uVar6 & 1) == 0) {
    uVar4 = FUN_00722fb0(param_1[0x38],
                         *(long *)(*(long *)(param_1[0x39] + 0x68) + 0x260) + (long)param_3 * 0x60 +
                         0x20);
    *(undefined4 *)((long)param_1 + 0x1d4) = uVar4;
  }
  lVar5 = (long)(int)param_1[0x3a];
  lVar7 = *(long *)(param_1[0x17] + 0x260);
  if (*(char *)(lVar7 + lVar5 * 0x60 + 0x4c) == '\0') {
    uVar6 = 0xc00000000;
  }
  else {
    uVar6 = (ulong)(*(int *)(*(long *)(lVar7 + lVar5 * 0x60 + 0x50) + 8) + 3U & 7) << 0x22;
  }
  param_1[0x14] =
       uVar6 | param_1[0x14] & 0xffffffe3fffffc1fU |
       ((ulong)*(uint *)(lVar7 + lVar5 * 0x60 + 0x48) & 0x1f) << 5;
  return;
}


