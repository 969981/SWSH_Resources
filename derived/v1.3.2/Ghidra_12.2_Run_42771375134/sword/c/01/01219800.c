/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01219800; name: FUN_01219800
 */


void FUN_01219800(undefined2 *param_1,long *param_2)

{
  char *pcVar1;
  long lVar2;
  undefined8 local_28;
  
  pcVar1 = (char *)(**(code **)(*param_2 + 0x10))();
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != '\x02')) {
    *(undefined1 *)param_1 = 0;
    return;
  }
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  if (lVar2 == 0) {
    *param_1 = 1;
    return;
  }
  local_28 = 8;
  FUN_0121acd0(lVar2 + 0xfb,&local_28);
  *param_1 = 0x101;
  return;
}


