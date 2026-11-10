/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab4790; name: FUN_00ab4790
 */


void FUN_00ab4790(long *param_1,long param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  FUN_015f5d10();
  puVar1 = PTR_DAT_027198c0;
  param_1[0x10] = param_2;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = param_3;
  *(undefined4 *)(param_1 + 0x12) = param_3;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x60);
  param_1[10] = (long)(puVar1 + 0xa0);
  *(undefined2 *)((long)param_1 + 0x94) = 0x100;
  *(undefined4 *)(param_1 + 0x13) = *param_4;
  *(undefined2 *)((long)param_1 + 0x9c) = *(undefined2 *)(param_4 + 1);
  *(undefined4 *)(param_1 + 0x14) = param_4[2];
  *(undefined1 *)((long)param_1 + 0xa4) = *(undefined1 *)(param_4 + 3);
  *(undefined1 *)((long)param_1 + 0xa5) = *(undefined1 *)((long)param_4 + 0xd);
  *(undefined4 *)(param_1 + 0x15) = param_4[4];
  *(undefined4 *)((long)param_1 + 0xac) = param_4[5];
  *(undefined4 *)(param_1 + 0x16) = param_4[6];
  *(undefined1 *)((long)param_1 + 0xb4) = 0;
  *(undefined1 *)(param_2 + 0x17a0) = 1;
  if ((*(uint *)((long)param_1 + 0x8c) == 0xff) ||
     (lVar2 = *(long *)(param_1[0x10] + (ulong)*(uint *)((long)param_1 + 0x8c) * 8 + 0x548),
     lVar2 == 0)) {
    *(undefined1 *)((long)param_1 + 0xb4) = DAT_0000050c;
    return;
  }
  plVar3 = (long *)(lVar2 + 0x48);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  *(undefined1 *)((long)param_1 + 0xb4) = *(undefined1 *)(lVar2 + 0x50c);
                    /* WARNING: Could not recover jumptable at 0x00ab4880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return;
}


