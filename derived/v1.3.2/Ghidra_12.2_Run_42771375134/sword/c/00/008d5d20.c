/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d5d20; name: FUN_008d5d20
 */


void FUN_008d5d20(long param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *local_50;
  undefined8 local_48;
  
  local_50 = param_2;
  local_48 = param_3;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x318,8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  FUN_00930750(uVar1,&local_50);
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  puVar3 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
              (*(long **)(param_1 + 0x10),puVar3,*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20));
  }
  *(long **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = 0x318;
  *(undefined8 *)(param_1 + 0x20) = 8;
  return;
}


