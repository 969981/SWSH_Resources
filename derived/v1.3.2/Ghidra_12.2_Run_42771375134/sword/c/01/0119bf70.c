/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0119bf70; name: FUN_0119bf70
 */


void FUN_0119bf70(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x1a8);
  if (((((((lVar1 == 0) || (*(long *)(param_2 + 0x1b0) != param_3)) &&
         ((lVar1 = *(long *)(param_2 + 0x1c0), lVar1 == 0 || (*(long *)(param_2 + 0x1c8) != param_3)
          ))) && ((lVar1 = *(long *)(param_2 + 0x1d8), lVar1 == 0 ||
                  (*(long *)(param_2 + 0x1e0) != param_3)))) &&
       ((lVar1 = *(long *)(param_2 + 0x1f0), lVar1 == 0 || (*(long *)(param_2 + 0x1f8) != param_3)))
       ) && ((((lVar1 = *(long *)(param_2 + 0x208), lVar1 == 0 ||
               (*(long *)(param_2 + 0x210) != param_3)) &&
              ((lVar1 = *(long *)(param_2 + 0x220), lVar1 == 0 ||
               (*(long *)(param_2 + 0x228) != param_3)))) &&
             ((lVar1 = *(long *)(param_2 + 0x238), lVar1 == 0 ||
              (*(long *)(param_2 + 0x240) != param_3)))))) &&
     ((lVar1 = *(long *)(param_2 + 0x250), lVar1 == 0 || (*(long *)(param_2 + 600) != param_3)))) {
    *param_1 = 0;
    return;
  }
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x0119c020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  return;
}


