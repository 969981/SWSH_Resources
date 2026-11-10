/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01061270; name: FUN_01061270
 */


void FUN_01061270(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_2;
  plVar2 = *(long **)(param_1 + 0x98);
  if (((((*plVar2 == lVar1) || (plVar2 = *(long **)(param_1 + 0xb8), *plVar2 == lVar1)) ||
       (plVar2 = *(long **)(param_1 + 0xd8), *plVar2 == lVar1)) ||
      (((plVar2 = *(long **)(param_1 + 0xf8), *plVar2 == lVar1 ||
        (plVar2 = *(long **)(param_1 + 0x118), *plVar2 == lVar1)) ||
       ((plVar2 = *(long **)(param_1 + 0x138), *plVar2 == lVar1 ||
        ((plVar2 = *(long **)(param_1 + 0x158), *plVar2 == lVar1 ||
         (plVar2 = *(long **)(param_1 + 0x178), *plVar2 == lVar1)))))))) ||
     ((plVar2 = *(long **)(param_1 + 0x198), *plVar2 == lVar1 ||
      (((((plVar2 = *(long **)(param_1 + 0x1b8), *plVar2 == lVar1 ||
          (plVar2 = *(long **)(param_1 + 0x1d8), *plVar2 == lVar1)) ||
         (plVar2 = *(long **)(param_1 + 0x1f8), *plVar2 == lVar1)) ||
        ((plVar2 = *(long **)(param_1 + 0x218), *plVar2 == lVar1 ||
         (plVar2 = *(long **)(param_1 + 0x238), *plVar2 == lVar1)))) ||
       ((plVar2 = *(long **)(param_1 + 600), *plVar2 == lVar1 ||
        (plVar2 = *(long **)(param_1 + 0x278), *plVar2 == lVar1)))))))) {
    *plVar2 = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    *(undefined2 *)(plVar2 + 4) = 0x101;
    plVar2[2] = 0;
    plVar2[3] = 0;
    plVar2[1] = 0;
    *(undefined1 *)((long)plVar2 + 0x22) = 1;
  }
  return;
}


