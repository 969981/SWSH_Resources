/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c86210; name: FUN_00c86210
 */


void FUN_00c86210(long param_1,undefined1 (*param_2) [16],undefined4 *param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  bool bVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  
  if (((*(int *)(param_1 + 0xbc) == 2) && (*(int *)(param_1 + 0xa8) != 0x37c)) &&
     ((*(int *)(param_1 + 0xb0) != 0 || (*(short *)(param_1 + 0xac) != 0)))) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined2 *)(param_1 + 0xac) = 0;
  }
  auVar5 = FUN_014a9f30();
  *param_2 = auVar5;
  plVar2 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x19);
  if (*(long *)(param_1 + 200) != *plVar2) {
    plVar2 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x1e);
    if (*(long *)(param_1 + 200) != *plVar2) {
      plVar2 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x1a);
      if (*(long *)(param_1 + 200) == *plVar2) {
        bVar1 = true;
        uVar4 = 1;
        uVar3 = 1;
      }
      else {
        plVar2 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x18);
        if (*(long *)(param_1 + 200) == *plVar2) {
          uVar4 = 2;
          bVar1 = true;
          uVar3 = 2;
        }
        else {
          plVar2 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x1f);
          if (*(long *)(param_1 + 200) == *plVar2) {
            bVar1 = false;
            uVar4 = 0;
            uVar3 = 0;
          }
          else {
            plVar2 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x20);
            bVar1 = *(long *)(param_1 + 200) != *plVar2;
            uVar4 = 0;
            uVar3 = 0;
          }
        }
      }
      goto LAB_00c862b8;
    }
  }
  uVar3 = 0;
  bVar1 = true;
  uVar4 = 1;
LAB_00c862b8:
  *(bool *)param_4 = bVar1;
  *param_3 = uVar4;
  *param_5 = uVar3;
  return;
}


