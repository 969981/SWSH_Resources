/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c929c0; name: FUN_00c929c0
 */


void FUN_00c929c0(long param_1,char *param_2)

{
  void *__dest;
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 local_24 [4];
  
  if (*(char *)(param_1 + 0x1d8) == *param_2) {
    __dest = (void *)(param_1 + 0x1d8);
    memcpy(__dest,param_2,0x90);
    FUN_00c8ed90(param_1);
    if (*(char *)(param_1 + 0x601) == '\0') {
      if ((*(long *)(param_1 + 0x70) == 0) ||
         (puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x70) + 0x60), puVar1 == (undefined8 *)0x0))
      {
        uVar2 = FUN_00c963b0(__dest,0);
      }
      else {
        puVar4 = puVar1 + -10;
        (**(code **)*puVar1)();
        uVar2 = FUN_00c953c0();
        if ((uVar2 & 1) == 0) {
          puVar4 = (undefined8 *)0x0;
        }
        uVar2 = FUN_00c963b0(__dest,puVar4);
      }
      if ((uVar2 & 1) == 0) {
        lVar5 = *(long *)(param_1 + 600);
        local_24[0] = 0;
        FUN_00cc1c90(__dest,param_1 + 0x260,__dest,local_24);
        plVar3 = (long *)FUN_00cbd3c0();
        if (lVar5 == *plVar3) {
          *(long *)(param_1 + 600) = lVar5;
          return;
        }
      }
    }
  }
  return;
}


