/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00144f80; name: FUN_00144f80
 */


void FUN_00144f80(long *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < param_2) {
    FUN_001467d0(param_1,param_2);
  }
  if (*(uint *)(param_1 + 1) < param_2) {
    lVar2 = *param_1;
    puVar1 = (undefined8 *)(lVar2 + (ulong)*(uint *)(param_1 + 1) * 0x60);
    do {
      puVar1[3] = param_3[3];
      puVar1[2] = param_3[2];
      puVar1[1] = param_3[1];
      *puVar1 = *param_3;
      *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)((long)puVar1 + 0x24) = *(undefined4 *)((long)param_3 + 0x24);
      *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_3 + 5);
      *(undefined4 *)((long)puVar1 + 0x2c) = *(undefined4 *)((long)param_3 + 0x2c);
      *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_3 + 6);
      *(undefined4 *)((long)puVar1 + 0x34) = *(undefined4 *)((long)param_3 + 0x34);
      *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_3 + 7);
      *(undefined4 *)((long)puVar1 + 0x3c) = *(undefined4 *)((long)param_3 + 0x3c);
      *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(param_3 + 8);
      *(undefined4 *)((long)puVar1 + 0x44) = *(undefined4 *)((long)param_3 + 0x44);
      *(undefined4 *)(puVar1 + 9) = *(undefined4 *)(param_3 + 9);
      *(undefined4 *)((long)puVar1 + 0x4c) = *(undefined4 *)((long)param_3 + 0x4c);
      *(undefined4 *)(puVar1 + 10) = *(undefined4 *)(param_3 + 10);
      *(undefined4 *)((long)puVar1 + 0x5c) = *(undefined4 *)((long)param_3 + 0x5c);
      *(undefined8 *)((long)puVar1 + 0x54) = *(undefined8 *)((long)param_3 + 0x54);
      puVar1 = puVar1 + 0xc;
    } while (puVar1 < (undefined8 *)(lVar2 + (ulong)param_2 * 0x60));
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}


