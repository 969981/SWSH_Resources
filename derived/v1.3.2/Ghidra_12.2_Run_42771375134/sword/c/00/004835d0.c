/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004835d0; name: FUN_004835d0
 */


undefined8 FUN_004835d0(long *param_1,uint param_2,int param_3,byte param_4,int param_5)

{
  long lVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  
  if (param_2 < 4) {
    piVar3 = (int *)param_1[0xc];
    if (piVar3 == (int *)0x0) {
      puVar4 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x28);
      param_1[0xc] = (long)puVar4;
      piVar3 = (int *)0x0;
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined2 *)(puVar4 + 2) = 0;
        *(undefined4 *)((long)puVar4 + 0xc) = 0;
        *(undefined2 *)(puVar4 + 3) = 0;
        *(undefined4 *)((long)puVar4 + 0x14) = 0;
        *(undefined2 *)(puVar4 + 4) = 0;
        *(undefined4 *)((long)puVar4 + 0x1c) = 0;
        *(undefined1 *)((long)puVar4 + 0x24) = 0;
        *(undefined2 *)(puVar4 + 1) = 0;
        *puVar4 = 0;
        piVar3 = (int *)param_1[0xc];
      }
      if (piVar3 == (int *)0x0) {
        return 0x34;
      }
    }
    if (*piVar3 <= param_5) {
      *piVar3 = param_5;
      lVar1 = param_1[0xc] + (ulong)param_2 * 8;
      pbVar5 = (byte *)(lVar1 + 9);
      piVar3 = (int *)(lVar1 + 4);
      if ((*pbVar5 != (param_4 & 1)) || (*piVar3 != param_3)) {
        *pbVar5 = param_4 & 1;
        *piVar3 = param_3;
        (**(code **)(*param_1 + 0x180))(param_1,0);
        (**(code **)(*param_1 + 0x110))(param_1,param_2);
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0x1f;
  }
  return uVar2;
}


