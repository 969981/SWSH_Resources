/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004836f0; name: FUN_004836f0
 */


undefined8 FUN_004836f0(long *param_1,uint param_2,byte param_3)

{
  undefined8 *puVar1;
  long lVar2;
  int *piVar3;
  
  if (param_1[0xc] == 0) {
    if ((param_3 & 1) == 0) {
      return 1;
    }
    puVar1 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x28);
    param_1[0xc] = (long)puVar1;
    lVar2 = 0;
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined2 *)(puVar1 + 2) = 0;
      *(undefined4 *)((long)puVar1 + 0xc) = 0;
      *(undefined2 *)(puVar1 + 3) = 0;
      *(undefined4 *)((long)puVar1 + 0x14) = 0;
      *(undefined2 *)(puVar1 + 4) = 0;
      *(undefined4 *)((long)puVar1 + 0x1c) = 0;
      *(undefined1 *)((long)puVar1 + 0x24) = 0;
      *(undefined2 *)(puVar1 + 1) = 0;
      *puVar1 = 0;
      lVar2 = param_1[0xc];
    }
    if (lVar2 == 0) {
      return 0x34;
    }
    *(byte *)(lVar2 + (ulong)param_2 * 8 + 8) = param_3 & 1;
  }
  else {
    *(byte *)(param_1[0xc] + (ulong)param_2 * 8 + 8) = param_3 & 1;
    if ((param_3 & 1) == 0) {
      return 1;
    }
  }
  lVar2 = param_1[0xc] + (ulong)param_2 * 8;
  piVar3 = (int *)(lVar2 + 4);
  if (*piVar3 != 0) {
    *(undefined1 *)(lVar2 + 9) = 0;
    *piVar3 = 0;
    (**(code **)(*param_1 + 0x180))(param_1,0);
    (**(code **)(*param_1 + 0x110))(param_1,param_2);
  }
  return 1;
}


