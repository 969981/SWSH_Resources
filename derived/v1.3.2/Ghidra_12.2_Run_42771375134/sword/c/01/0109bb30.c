/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0109bb30; name: FUN_0109bb30
 */


void FUN_0109bb30(long param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0x670) != '\0') {
    if ((param_2 & 1) == 0) {
      lVar1 = *(long *)(param_1 + 0x2b0);
      if (lVar1 == 0) {
        FUN_0167b9b0(0,param_1 + 0x688,0);
      }
      else {
        plVar2 = (long *)(lVar1 + 0x48);
        (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_0167b9b0(lVar1,param_1 + 0x688,0);
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    else {
      FUN_00ffcf80(param_1 + 0x100,"anime_levelwin_out");
    }
    *(undefined1 *)(param_1 + 0x670) = 0;
  }
  return;
}


