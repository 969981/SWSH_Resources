/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ba410; name: FUN_001ba410
 */


void FUN_001ba410(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long local_70;
  char local_64 [4];
  
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2);
  lVar9 = param_2[9];
  FUN_003ff570(*(undefined8 *)(param_1 + 8));
  if (uVar4 != 0) {
    uVar10 = 0;
    lVar1 = param_1 + 0x3b8;
    do {
      lVar8 = *(long *)(lVar9 + uVar10 * 0x10);
      switch(*(undefined2 *)(lVar8 + 8)) {
      case 1:
        *(long *)(lVar8 + 0x80) = param_1;
                    /* try { // try from 001ba510 to 001ba51f has its CatchHandler @ 001ba7a8 */
        FUN_0029c990(param_1,lVar8,0);
        break;
      case 2:
        *(long *)(lVar8 + 0xa0) = param_1;
                    /* try { // try from 001ba528 to 001ba537 has its CatchHandler @ 001ba7a4 */
        FUN_0029c4f0(param_1,lVar8,0);
        break;
      case 3:
      case 4:
        *(long *)(lVar8 + 0x78) = param_1;
                    /* try { // try from 001ba4f8 to 001ba507 has its CatchHandler @ 001ba7ac */
        FUN_0029b0f0(param_1,lVar8,0);
        break;
      case 5:
        uVar2 = *(uint *)(param_1 + 0x1cf0);
        uVar7 = (ulong)uVar2;
        if (uVar2 == 0) {
          if ((*(uint *)(param_1 + 0x1cf4) & 0x7fffffc0) == 0) {
            local_70 = lVar8;
                    /* try { // try from 001ba4ac to 001ba4b7 has its CatchHandler @ 001ba7a0 */
            FUN_001c7cc0(param_1 + 0x1ce8,0x40);
            uVar7 = (ulong)*(uint *)(param_1 + 0x1cf0);
            if ((*(uint *)(param_1 + 0x1cf4) & 0x7fffffff) <= *(uint *)(param_1 + 0x1cf0))
            goto LAB_001ba738;
          }
          else {
            uVar7 = 0;
            local_70 = lVar8;
            if ((*(uint *)(param_1 + 0x1cf4) & 0x7fffffff) == 0) {
LAB_001ba738:
                    /* try { // try from 001ba738 to 001ba743 has its CatchHandler @ 001ba7a0 */
              FUN_001c7e20(param_1 + 0x1ce8,&local_70);
              break;
            }
          }
        }
        else {
          local_70 = lVar8;
          if ((*(uint *)(param_1 + 0x1cf4) & 0x7fffffff) <= uVar2) goto LAB_001ba738;
        }
        *(long *)(*(long *)(param_1 + 0x1ce8) + uVar7 * 8) = lVar8;
        *(int *)(param_1 + 0x1cf0) = (int)uVar7 + 1;
        goto joined_r0x001ba570;
      case 6:
        local_70 = lVar8;
        if (lVar8 != 0) {
                    /* try { // try from 001ba580 to 001ba58f has its CatchHandler @ 001ba79c */
          plVar5 = (long *)FUN_001c7280(lVar1,&local_70,local_64);
LAB_001ba6f8:
          if (local_64[0] == '\0') {
            *plVar5 = local_70;
            goto joined_r0x001ba570;
          }
        }
        break;
      case 7:
        local_70 = lVar8;
        if (lVar8 != 0) {
                    /* try { // try from 001ba59c to 001ba5ab has its CatchHandler @ 001ba798 */
          plVar5 = (long *)FUN_001c7280(lVar1,&local_70,local_64);
          goto LAB_001ba6f8;
        }
        break;
      case 8:
        local_70 = lVar8;
        if (lVar8 != 0) {
                    /* try { // try from 001ba5b8 to 001ba5c7 has its CatchHandler @ 001ba794 */
          plVar5 = (long *)FUN_001c7410(param_1 + 0x3f0,&local_70,local_64);
          goto LAB_001ba6f8;
        }
        break;
      case 10:
        local_70 = lVar8;
        if (lVar8 != 0) {
                    /* try { // try from 001ba5d4 to 001ba5e3 has its CatchHandler @ 001ba790 */
          plVar5 = (long *)FUN_001c8810(param_1 + 0x380,&local_70,local_64);
          goto LAB_001ba6f8;
        }
        break;
      case 0xb:
        local_70 = lVar8;
        if (lVar8 != 0) {
                    /* try { // try from 001ba5f0 to 001ba5ff has its CatchHandler @ 001ba78c */
          plVar5 = (long *)FUN_001c7280(lVar1,&local_70,local_64);
          goto LAB_001ba6f8;
        }
        break;
      case 0xc:
        local_70 = lVar8;
        if (lVar8 != 0) {
                    /* try { // try from 001ba60c to 001ba61b has its CatchHandler @ 001ba788 */
          plVar5 = (long *)FUN_001c7280(lVar1,&local_70,local_64);
          goto LAB_001ba6f8;
        }
        break;
      case 0xd:
        local_70 = lVar8;
        if (lVar8 != 0) {
                    /* try { // try from 001ba628 to 001ba637 has its CatchHandler @ 001ba784 */
          plVar5 = (long *)FUN_001c7280(lVar1,&local_70,local_64);
          goto LAB_001ba6f8;
        }
        break;
      case 0xe:
        local_70 = lVar8;
                    /* try { // try from 001ba644 to 001ba653 has its CatchHandler @ 001ba780 */
        if ((lVar8 == 0) ||
           (plVar5 = (long *)FUN_001c8b70(param_1 + 0x310,&local_70,local_64), local_64[0] != '\0'))
        {
          iVar3 = *(int *)(lVar8 + 0x40);
        }
        else {
          *plVar5 = local_70;
          iVar3 = *(int *)(lVar8 + 0x40);
        }
        if (iVar3 != 0) {
          uVar7 = 0;
          do {
            lVar6 = *(long *)(*(long *)(lVar8 + 0x48) + uVar7 * 8);
            if (*(short *)(lVar6 + 8) == 6) {
              local_70 = lVar6;
              if (lVar6 != 0) {
                plVar5 = (long *)FUN_001c7280(lVar1,&local_70,local_64);
                goto LAB_001ba69c;
              }
            }
            else if ((*(short *)(lVar6 + 8) == 7) && (local_70 = lVar6, lVar6 != 0)) {
                    /* try { // try from 001ba68c to 001ba6c7 has its CatchHandler @ 001ba7b0 */
              plVar5 = (long *)FUN_001c7280(lVar1,&local_70,local_64);
LAB_001ba69c:
              if (local_64[0] == '\0') {
                *plVar5 = local_70;
              }
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(uint *)(lVar8 + 0x40));
        }
        break;
      case 0xf:
        local_70 = lVar8;
        if (lVar8 != 0) {
                    /* try { // try from 001ba6e8 to 001ba6f7 has its CatchHandler @ 001ba77c */
          plVar5 = (long *)FUN_001c8110(param_1 + 0x348,&local_70,local_64);
          goto LAB_001ba6f8;
        }
      }
joined_r0x001ba570:
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar4);
  }
                    /* try { // try from 001ba754 to 001ba757 has its CatchHandler @ 001ba778 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 8));
  return;
}


