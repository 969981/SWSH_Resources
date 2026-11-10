/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01219750; name: FUN_01219750
 */


void FUN_01219750(undefined1 *param_1,long *param_2)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_28;
  
  pcVar1 = (char *)(**(code **)(*param_2 + 0x10))();
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != '\x01')) {
    *param_1 = 0;
    return;
  }
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  if (lVar2 == 0) {
    param_1[8] = 0;
    *param_1 = 1;
    return;
  }
  local_28 = 8;
  uVar3 = FUN_0121ac30(lVar2 + 0xfb,&local_28);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  param_1[8] = 1;
  *param_1 = 1;
  return;
}


