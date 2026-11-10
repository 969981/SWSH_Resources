/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab46a0; name: FUN_00ab46a0
 */


void FUN_00ab46a0(long *param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  FUN_015f5d10();
  puVar1 = PTR_DAT_027198c0;
  param_1[0x10] = param_2;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = param_3;
  *(undefined4 *)(param_1 + 0x12) = param_4;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x60);
  param_1[10] = (long)(puVar1 + 0xa0);
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x94) = 1;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined2 *)((long)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)((long)param_1 + 0xa4) = 0;
  param_1[0x15] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00ab4768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return;
}


