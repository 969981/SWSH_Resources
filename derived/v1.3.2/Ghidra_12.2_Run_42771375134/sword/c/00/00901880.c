/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00901880; name: FUN_00901880
 */


void FUN_00901880(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  
  if (*(short *)(param_1 + 0x336) != 0) {
    iVar2 = FUN_008f8110(*(undefined8 *)(param_1 + 0x58));
    if ((iVar2 == 2) && (cVar1 = FUN_009141d0(*(undefined8 *)(param_1 + 0x340)), cVar1 == '\0')) {
      lVar3 = 1;
    }
    else {
      lVar3 = 0;
    }
    FUN_009c94e0(*(undefined8 *)(param_1 + 0x250),2,*(ushort *)(param_1 + 0x336) >> lVar3);
    FUN_009c95b0(*(undefined8 *)(param_1 + 0x250),2,0);
    (**(code **)(**(long **)(param_1 + 0x358) + 0x570))(*(long **)(param_1 + 0x358),2,1);
    *(undefined1 *)(param_1 + 0x2ac) = 0;
  }
  if (*(short *)(param_1 + 0x33a) == 0) {
    return;
  }
  FUN_009c94e0(*(undefined8 *)(param_1 + 0x250),1,
               *(undefined2 *)(param_1 + (ulong)*(byte *)(param_1 + 0x2a6) * 2 + 600));
  FUN_009c95b0(*(undefined8 *)(param_1 + 0x250),1,0);
                    /* WARNING: Could not recover jumptable at 0x00901950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x358) + 0x570))(*(long **)(param_1 + 0x358),1,1);
  return;
}


