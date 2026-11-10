/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c4b90; name: FUN_014c4b90
 */


void FUN_014c4b90(long param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar3 = param_1 + 0x58;
  lVar1 = lVar3 + (long)param_2 * 4;
  lVar8 = (long)param_2;
  lVar4 = lVar3 + lVar8 * 0x40;
  *(undefined4 *)(lVar4 + (ulong)*(uint *)(lVar1 + 0x1681c) * 4 + 0x2018) = *param_4;
  lVar2 = lVar3 + (long)param_2 * 0x10;
  *(undefined1 *)(lVar2 + (ulong)*(uint *)(lVar1 + 0x1681c) + 0x2818) = *(undefined1 *)(param_4 + 1)
  ;
  *(undefined4 *)(lVar4 + (ulong)*(uint *)(lVar1 + 0x1681c) * 4 + 0x2a18) = param_4[2];
  *(undefined4 *)(lVar4 + (ulong)*(uint *)(lVar1 + 0x1681c) * 4 + 0x3218) = param_4[3];
  *(undefined1 *)(lVar2 + (ulong)*(uint *)(lVar1 + 0x1681c) + 0x4218) = *(undefined1 *)(param_4 + 4)
  ;
  *(undefined1 *)(lVar2 + (ulong)*(uint *)(lVar1 + 0x1681c) + 0x4418) =
       *(undefined1 *)((long)param_4 + 0x11);
  lVar5 = lVar3 + lVar8 * 0x20;
  *(undefined2 *)(lVar5 + (ulong)*(uint *)(lVar1 + 0x1681c) * 2 + 0x4618) =
       *(undefined2 *)((long)param_4 + 0x12);
  *(undefined1 *)(lVar2 + (ulong)*(uint *)(lVar1 + 0x1681c) + 0x4a18) = *(undefined1 *)(param_4 + 5)
  ;
  *(undefined2 *)(lVar5 + (ulong)*(uint *)(lVar1 + 0x1681c) * 2 + 0x4c18) =
       *(undefined2 *)((long)param_4 + 0x16);
  *(undefined4 *)(lVar4 + (ulong)*(uint *)(lVar1 + 0x1681c) * 4 + 0x5018) = param_4[6];
  uVar7 = FUN_014c4610(param_3);
  lVar3 = lVar3 + lVar8 * 0x80;
  *(undefined8 *)(lVar3 + (ulong)*(uint *)(lVar1 + 0x1681c) * 8 + 0x18) = uVar7;
  uVar7 = FUN_014c4630(param_3);
  *(undefined8 *)(lVar3 + (ulong)*(uint *)(lVar1 + 0x1681c) * 8 + 0x1018) = uVar7;
  uVar6 = FUN_014c4650(param_3);
  *(undefined4 *)(lVar4 + (ulong)*(uint *)(lVar1 + 0x1681c) * 4 + 0x3a18) = uVar6;
  *(int *)(param_1 + 0x16870) = param_2 + 1;
  *(int *)(lVar1 + 0x1681c) = *(int *)(lVar1 + 0x1681c) + 1;
  return;
}


