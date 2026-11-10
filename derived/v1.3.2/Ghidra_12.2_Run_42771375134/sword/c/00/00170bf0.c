/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00170bf0; name: FUN_00170bf0
 */


void FUN_00170bf0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
                    /* try { // try from 00170c08 to 00170c0f has its CatchHandler @ 00170c7c */
  lVar1 = FUN_003ffa00(*param_1);
  while (lVar1 != 0) {
    FUN_0017b2d0(lVar1);
    lVar3 = *(long *)(lVar1 + -8);
                    /* try { // try from 00170c20 to 00170c3f has its CatchHandler @ 00170c80 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1 - lVar3);
    lVar1 = FUN_003ffa00(*param_1);
  }
  FUN_003ff990(*param_1);
  lVar1 = *param_1;
  if (lVar1 != 0) {
                    /* try { // try from 00170c54 to 00170c67 has its CatchHandler @ 00170c78 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
  }
  return;
}


