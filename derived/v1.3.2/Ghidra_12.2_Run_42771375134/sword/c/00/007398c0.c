/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007398c0; name: FUN_007398c0
 */


void FUN_007398c0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  
  FUN_0072b360(*(undefined8 *)(*(long *)(param_1 + 0xb0) + (long)*(int *)(param_1 + 0xfc) * 8),
               *(undefined8 *)(param_1 + 0x60));
  FUN_00734d40(*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0x60));
  FUN_00734cb0(*(undefined8 *)(param_1 + 0xe0),(long)*(int *)(param_1 + 0xfc),
               *(undefined8 *)(param_1 + 0x60));
  FUN_00722060(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0x60));
  puVar3 = PTR_DAT_02715500;
  FUN_0199dfb0(0x3f800000,
               *(long *)(*(long *)(param_1 + 0x60) + 0x58) + (long)*(int *)PTR_DAT_02715500 * 0x170)
  ;
  lVar4 = *(long *)(param_1 + 0xf0);
  if (lVar4 == 0) {
    FUN_0199cc20(*(long *)(*(long *)(param_1 + 0x60) + 0x58) + (long)*(int *)puVar3 * 0x170,
                 *(undefined4 *)(param_1 + 0xf8),
                 *(undefined4 *)
                  (*(long *)(*(long *)(*(long *)(param_1 + 0xe8) + 0x98) + 0x58) + 0x6c),0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x100);
  uVar2 = *(undefined4 *)(param_1 + 0xf8);
  lVar5 = (long)*(int *)puVar3;
  lVar6 = *(long *)(*(long *)(param_1 + 0x60) + 0x58);
  if (iVar1 == 0) {
    local_50 = 0;
    uStack_48 = 0;
    thunk_FUN_0199c850(lVar4 + 0x58,&local_50);
    FUN_0199cce0(lVar6 + lVar5 * 0x170,uVar2,1,&local_50,*(undefined4 *)(lVar4 + 0xc4),0);
  }
  else {
    local_50 = 0;
    uStack_48 = 0;
    thunk_FUN_0199c850(lVar4 + 0x58,&local_50);
    FUN_0199cd60(lVar6 + lVar5 * 0x170,uVar2,1,&local_50,*(undefined4 *)(lVar4 + 0xc4),0,iVar1,0);
  }
  return;
}


