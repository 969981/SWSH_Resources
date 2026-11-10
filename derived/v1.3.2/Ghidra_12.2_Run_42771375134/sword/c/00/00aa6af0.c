/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa6af0; name: FUN_00aa6af0
 */


void FUN_00aa6af0(long param_1)

{
  short sVar1;
  long lVar2;
  
  if ((*(short *)(param_1 + 0x24c) == 0xf9) || (*(long *)(param_1 + 0x240) == 0)) {
LAB_00aa6b58:
    if (*(short *)(param_1 + 0x47c) == 0xf9) goto LAB_00aa6bd8;
LAB_00aa6b64:
    if (*(long *)(param_1 + 0x470) == 0) goto LAB_00aa6bd8;
    FUN_00adca50();
    lVar2 = *(long *)(param_1 + 0x470);
    *(undefined8 *)(param_1 + 0x470) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    if (*(long *)(param_1 + 600) == 0) {
      *(undefined8 *)(param_1 + 600) = 0;
      goto LAB_00aa6bd8;
    }
    FUN_006e2100(*(long *)(param_1 + 600),param_1 + 0x250);
    lVar2 = *(long *)(param_1 + 600);
    *(undefined8 *)(param_1 + 600) = 0;
    if (lVar2 == 0) goto LAB_00aa6bd8;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    if (*(short *)(param_1 + 0x6ac) != 0xf9) goto LAB_00aa6be4;
LAB_00aa6c30:
    sVar1 = *(short *)(param_1 + 0x8dc);
  }
  else {
    FUN_00adca50();
    lVar2 = *(long *)(param_1 + 0x240);
    *(undefined8 *)(param_1 + 0x240) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_006e2100(*(long *)(param_1 + 0x28),param_1 + 0x20);
      lVar2 = *(long *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = 0;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      goto LAB_00aa6b58;
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (*(short *)(param_1 + 0x47c) != 0xf9) goto LAB_00aa6b64;
LAB_00aa6bd8:
    if (*(short *)(param_1 + 0x6ac) == 0xf9) goto LAB_00aa6c30;
LAB_00aa6be4:
    if (*(long *)(param_1 + 0x6a0) == 0) goto LAB_00aa6c30;
    FUN_00adca50();
    lVar2 = *(long *)(param_1 + 0x6a0);
    *(undefined8 *)(param_1 + 0x6a0) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    if (*(long *)(param_1 + 0x488) != 0) {
      FUN_006e2100(*(long *)(param_1 + 0x488),param_1 + 0x480);
      lVar2 = *(long *)(param_1 + 0x488);
      *(undefined8 *)(param_1 + 0x488) = 0;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      goto LAB_00aa6c30;
    }
    *(undefined8 *)(param_1 + 0x488) = 0;
    sVar1 = *(short *)(param_1 + 0x8dc);
  }
  if ((sVar1 != 0xf9) && (*(long *)(param_1 + 0x8d0) != 0)) {
    FUN_00adca50();
    lVar2 = *(long *)(param_1 + 0x8d0);
    *(undefined8 *)(param_1 + 0x8d0) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    if (*(long *)(param_1 + 0x6b8) == 0) {
      *(undefined8 *)(param_1 + 0x6b8) = 0;
      sVar1 = *(short *)(param_1 + 0xb0c);
      goto joined_r0x00aa6c90;
    }
    FUN_006e2100(*(long *)(param_1 + 0x6b8),param_1 + 0x6b0);
    lVar2 = *(long *)(param_1 + 0x6b8);
    *(undefined8 *)(param_1 + 0x6b8) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      sVar1 = *(short *)(param_1 + 0xb0c);
      goto joined_r0x00aa6c90;
    }
  }
  sVar1 = *(short *)(param_1 + 0xb0c);
joined_r0x00aa6c90:
  if ((sVar1 != 0xf9) && (*(long *)(param_1 + 0xb00) != 0)) {
    FUN_00adca50();
    lVar2 = *(long *)(param_1 + 0xb00);
    *(undefined8 *)(param_1 + 0xb00) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    if (*(long *)(param_1 + 0x8e8) == 0) {
      *(undefined8 *)(param_1 + 0x8e8) = 0;
      return;
    }
    FUN_006e2100(*(long *)(param_1 + 0x8e8),param_1 + 0x8e0);
    lVar2 = *(long *)(param_1 + 0x8e8);
    *(undefined8 *)(param_1 + 0x8e8) = 0;
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00aa6d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


