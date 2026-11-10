/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001fbe90; name: FUN_001fbe90
 */


void FUN_001fbe90(long param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  puVar5 = (undefined4 *)(**(code **)(*param_2 + 0x18))(param_2);
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2);
  if ((*(uint *)(param_1 + 0x14) & 0x7fffffff) < *(int *)(param_1 + 0x10) + uVar3) {
    FUN_001fdf40(param_1 + 8);
  }
  if (uVar3 != 0) {
    puVar1 = puVar5 + (ulong)uVar3 * 4;
    do {
      while( true ) {
        uVar3 = *(uint *)(param_1 + 0x10);
        if ((*(uint *)(param_1 + 0x14) & 0x7fffffff) <= uVar3) break;
        puVar2 = (undefined4 *)(*(long *)(param_1 + 8) + (ulong)uVar3 * 0x10);
        *puVar2 = *puVar5;
        puVar2[1] = puVar5[1];
        puVar2[2] = puVar5[2];
        puVar2[3] = puVar5[3];
        *(uint *)(param_1 + 0x10) = uVar3 + 1;
        puVar5 = puVar5 + 4;
        if (puVar1 <= puVar5) goto LAB_001fbf64;
      }
      FUN_001fe050(param_1 + 8,puVar5);
      puVar5 = puVar5 + 4;
    } while (puVar5 < puVar1);
  }
LAB_001fbf64:
  puVar5 = (undefined4 *)(**(code **)(*param_2 + 0x28))(param_2);
  uVar3 = (**(code **)(*param_2 + 0x20))(param_2);
  if ((*(uint *)(param_1 + 0x24) & 0x7fffffff) < *(int *)(param_1 + 0x20) + uVar3) {
    FUN_001df120(param_1 + 0x18);
  }
  if (uVar3 != 0) {
    puVar1 = puVar5 + (ulong)uVar3 * 8;
    do {
      while( true ) {
        uVar3 = *(uint *)(param_1 + 0x20);
        if ((*(uint *)(param_1 + 0x24) & 0x7fffffff) <= uVar3) break;
        puVar2 = (undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)uVar3 * 0x20);
        *puVar2 = *puVar5;
        puVar2[1] = puVar5[1];
        puVar2[2] = puVar5[2];
        puVar2[3] = puVar5[3];
        puVar2[4] = puVar5[4];
        puVar2[5] = puVar5[5];
        puVar2[6] = puVar5[6];
        puVar2[7] = puVar5[7];
        *(uint *)(param_1 + 0x20) = uVar3 + 1;
        puVar5 = puVar5 + 8;
        if (puVar1 <= puVar5) goto LAB_001fc040;
      }
      FUN_001fe1b0(param_1 + 0x18,puVar5);
      puVar5 = puVar5 + 8;
    } while (puVar5 < puVar1);
  }
LAB_001fc040:
  uVar6 = (**(code **)(*param_2 + 0x38))(param_2);
  uVar4 = (**(code **)(*param_2 + 0x30))(param_2);
  FUN_001fde40(param_1,param_1 + 0x28,uVar6,uVar4);
  puVar5 = (undefined4 *)(**(code **)(*param_2 + 0x48))(param_2);
  uVar3 = (**(code **)(*param_2 + 0x40))(param_2);
  if ((*(uint *)(param_1 + 0x44) & 0x7fffffff) < *(int *)(param_1 + 0x40) + uVar3) {
    FUN_001fe690(param_1 + 0x38);
  }
  if (uVar3 != 0) {
    puVar1 = puVar5 + (ulong)uVar3 * 8;
    do {
      while ((*(uint *)(param_1 + 0x44) & 0x7fffffff) <= *(uint *)(param_1 + 0x40)) {
        FUN_001fe840(param_1 + 0x38,puVar5);
        puVar5 = puVar5 + 8;
        if (puVar1 <= puVar5) {
          return;
        }
      }
      puVar2 = (undefined4 *)(*(long *)(param_1 + 0x38) + (ulong)*(uint *)(param_1 + 0x40) * 0x20);
      *puVar2 = *puVar5;
      puVar2[1] = puVar5[1];
      puVar2[2] = puVar5[2];
      puVar2[7] = puVar5[7];
      *(undefined8 *)(puVar2 + 5) = *(undefined8 *)(puVar5 + 5);
      *(undefined8 *)(puVar2 + 3) = *(undefined8 *)(puVar5 + 3);
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      puVar5 = puVar5 + 8;
    } while (puVar5 < puVar1);
  }
  return;
}


