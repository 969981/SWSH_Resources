/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004837f0; name: FUN_004837f0
 */


undefined8 FUN_004837f0(long *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x88))();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x88))(param_1);
  }
  lVar2 = param_1[0xc];
  if (lVar2 == 0) {
    if (param_2 == 0) {
      return 1;
    }
    puVar3 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x28);
    param_1[0xc] = (long)puVar3;
    lVar2 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined2 *)(puVar3 + 2) = 0;
      *(undefined4 *)((long)puVar3 + 0xc) = 0;
      *(undefined2 *)(puVar3 + 3) = 0;
      *(undefined4 *)((long)puVar3 + 0x14) = 0;
      *(undefined2 *)(puVar3 + 4) = 0;
      *(undefined4 *)((long)puVar3 + 0x1c) = 0;
      *(undefined1 *)((long)puVar3 + 0x24) = 0;
      *(undefined2 *)(puVar3 + 1) = 0;
      *puVar3 = 0;
      lVar2 = param_1[0xc];
    }
    if (lVar2 == 0) {
      return 0x34;
    }
  }
  *(byte *)(lVar2 + 0x24) =
       *(byte *)(lVar2 + 0x24) & ((byte)param_3 ^ 0xff) | (byte)param_3 & (byte)param_2;
  (**(code **)(*param_1 + 0x1c0))(param_1,param_2,param_3);
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_3,0,0);
  return 1;
}


