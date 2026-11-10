/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01315da0; name: FUN_01315da0
 */


void FUN_01315da0(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  
  if (param_2 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if (param_2 == param_3) {
    uVar6 = *(ulong *)(param_1 + 0x80);
    param_3 = param_2;
    if (uVar6 == param_2) goto LAB_01315de4;
  }
  else {
    if (param_2 < param_3) {
      uVar1 = param_2;
    }
    else {
      uVar1 = param_3;
      param_3 = param_2;
    }
    uVar6 = *(ulong *)(param_1 + 0x80);
    param_2 = uVar1;
    if (uVar6 == uVar1) {
LAB_01315de4:
      puVar3 = (ulong *)(param_1 + 0x80);
      if (*(ulong *)(param_1 + 0x88) == param_3) goto LAB_013165c4;
    }
  }
  puVar3 = (ulong *)(param_1 + 0x98);
  if ((*puVar3 != param_2) || (*(ulong *)(param_1 + 0xa0) != param_3)) {
    puVar4 = (ulong *)(param_1 + 0xb0);
    if ((*puVar4 == param_2) && (*(ulong *)(param_1 + 0xb8) == param_3)) {
      puVar3 = puVar4;
      goto LAB_013165c4;
    }
    puVar5 = (ulong *)(param_1 + 200);
    if ((*puVar5 == param_2) && (*(ulong *)(param_1 + 0xd0) == param_3)) {
      puVar3 = puVar5;
      goto LAB_013165c4;
    }
    puVar7 = (ulong *)(param_1 + 0xe0);
    if ((*puVar7 == param_2) && (*(ulong *)(param_1 + 0xe8) == param_3)) {
      puVar3 = puVar7;
      goto LAB_013165c4;
    }
    puVar8 = (ulong *)(param_1 + 0xf8);
    if ((*puVar8 == param_2) && (*(ulong *)(param_1 + 0x100) == param_3)) {
      puVar3 = puVar8;
      goto LAB_013165c4;
    }
    if ((*(ulong *)(param_1 + 0x110) == param_2) && (*(ulong *)(param_1 + 0x118) == param_3)) {
      puVar3 = (ulong *)(param_1 + 0x110);
      goto LAB_013165c4;
    }
    if ((*(ulong *)(param_1 + 0x128) == param_2) && (*(ulong *)(param_1 + 0x130) == param_3)) {
      puVar3 = (ulong *)(param_1 + 0x128);
      goto LAB_013165c4;
    }
    if ((*(ulong *)(param_1 + 0x140) == param_2) && (*(ulong *)(param_1 + 0x148) == param_3)) {
      puVar3 = (ulong *)(param_1 + 0x140);
      goto LAB_013165c4;
    }
    if ((*(ulong *)(param_1 + 0x158) == param_2) && (*(ulong *)(param_1 + 0x160) == param_3)) {
      puVar3 = (ulong *)(param_1 + 0x158);
      goto LAB_013165c4;
    }
    if ((*(ulong *)(param_1 + 0x170) == param_2) && (*(ulong *)(param_1 + 0x178) == param_3)) {
      puVar3 = (ulong *)(param_1 + 0x170);
      goto LAB_013165c4;
    }
    if ((*(ulong *)(param_1 + 0x188) != param_2) ||
       (puVar10 = (ulong *)(param_1 + 0x188), *(ulong *)(param_1 + 400) != param_3)) {
      if ((*(ulong *)(param_1 + 0x1a0) == param_2) && (*(ulong *)(param_1 + 0x1a8) == param_3)) {
        puVar3 = (ulong *)(param_1 + 0x1a0);
        goto LAB_013165c4;
      }
      if ((*(ulong *)(param_1 + 0x1b8) == param_2) && (*(ulong *)(param_1 + 0x1c0) == param_3)) {
        puVar3 = (ulong *)(param_1 + 0x1b8);
        goto LAB_013165c4;
      }
      if ((*(ulong *)(param_1 + 0x1d0) == param_2) && (*(ulong *)(param_1 + 0x1d8) == param_3)) {
        puVar3 = (ulong *)(param_1 + 0x1d0);
        goto LAB_013165c4;
      }
      if ((*(ulong *)(param_1 + 0x1e8) == param_2) && (*(ulong *)(param_1 + 0x1f0) == param_3)) {
        puVar3 = (ulong *)(param_1 + 0x1e8);
        goto LAB_013165c4;
      }
      if ((*(ulong *)(param_1 + 0x200) == param_2) && (*(ulong *)(param_1 + 0x208) == param_3)) {
        puVar3 = (ulong *)(param_1 + 0x200);
        goto LAB_013165c4;
      }
      if ((*(ulong *)(param_1 + 0x218) == param_2) && (*(ulong *)(param_1 + 0x220) == param_3)) {
        puVar3 = (ulong *)(param_1 + 0x218);
        goto LAB_013165c4;
      }
      if ((*(ulong *)(param_1 + 0x230) == param_2) && (*(ulong *)(param_1 + 0x238) == param_3)) {
        puVar3 = (ulong *)(param_1 + 0x230);
        goto LAB_013165c4;
      }
      if ((*(ulong *)(param_1 + 0x248) == param_2) && (*(ulong *)(param_1 + 0x250) == param_3)) {
        puVar3 = (ulong *)(param_1 + 0x248);
        goto LAB_013165c4;
      }
      if ((*(ulong *)(param_1 + 0x260) == param_2) && (*(ulong *)(param_1 + 0x268) == param_3)) {
        puVar3 = (ulong *)(param_1 + 0x260);
        goto LAB_013165c4;
      }
      if ((*(ulong *)(param_1 + 0x278) == param_2) && (*(ulong *)(param_1 + 0x280) == param_3)) {
        puVar3 = (ulong *)(param_1 + 0x278);
        goto LAB_013165c4;
      }
      if ((*(ulong *)(param_1 + 0x290) == param_2) && (*(ulong *)(param_1 + 0x298) == param_3)) {
        puVar3 = (ulong *)(param_1 + 0x290);
        goto LAB_013165c4;
      }
      if ((*(ulong *)(param_1 + 0x2a8) == param_2) && (*(ulong *)(param_1 + 0x2b0) == param_3)) {
        puVar3 = (ulong *)(param_1 + 0x2a8);
        goto LAB_013165c4;
      }
      if ((*(ulong *)(param_1 + 0x2c0) == param_2) && (*(ulong *)(param_1 + 0x2c8) == param_3)) {
        puVar3 = (ulong *)(param_1 + 0x2c0);
        goto LAB_013165c4;
      }
      if ((*(ulong *)(param_1 + 0x2d8) == param_2) && (*(ulong *)(param_1 + 0x2e0) == param_3)) {
        puVar3 = (ulong *)(param_1 + 0x2d8);
        goto LAB_013165c4;
      }
      if ((*(ulong *)(param_1 + 0x2f0) == param_2) && (*(ulong *)(param_1 + 0x2f8) == param_3)) {
        puVar3 = (ulong *)(param_1 + 0x2f0);
        goto LAB_013165c4;
      }
      if ((*(ulong *)(param_1 + 0x308) == param_2) && (*(ulong *)(param_1 + 0x310) == param_3)) {
        puVar3 = (ulong *)(param_1 + 0x308);
        goto LAB_013165c4;
      }
      if ((*(ulong *)(param_1 + 800) == param_2) && (*(ulong *)(param_1 + 0x328) == param_3)) {
        puVar3 = (ulong *)(param_1 + 800);
        goto LAB_013165c4;
      }
      if ((*(ulong *)(param_1 + 0x338) == param_2) && (*(ulong *)(param_1 + 0x340) == param_3)) {
        puVar3 = (ulong *)(param_1 + 0x338);
        goto LAB_013165c4;
      }
      if ((*(ulong *)(param_1 + 0x350) == param_2) && (*(ulong *)(param_1 + 0x358) == param_3)) {
        puVar3 = (ulong *)(param_1 + 0x350);
        goto LAB_013165c4;
      }
      if ((*(ulong *)(param_1 + 0x368) == param_2) && (*(ulong *)(param_1 + 0x370) == param_3)) {
        puVar3 = (ulong *)(param_1 + 0x368);
        goto LAB_013165c4;
      }
      if ((*(ulong *)(param_1 + 0x380) == param_2) && (*(ulong *)(param_1 + 0x388) == param_3)) {
        puVar3 = (ulong *)(param_1 + 0x380);
        goto LAB_013165c4;
      }
      if ((*(ulong *)(param_1 + 0x398) == param_2) && (*(ulong *)(param_1 + 0x3a0) == param_3)) {
        puVar3 = (ulong *)(param_1 + 0x398);
        goto LAB_013165c4;
      }
      if ((*(ulong *)(param_1 + 0x3b0) == param_2) && (*(ulong *)(param_1 + 0x3b8) == param_3)) {
        puVar3 = (ulong *)(param_1 + 0x3b0);
        goto LAB_013165c4;
      }
      puVar10 = (ulong *)(param_1 + 0x3c8);
      if ((*(ulong *)(param_1 + 0x3c8) != param_2) || (*(ulong *)(param_1 + 0x3d0) != param_3)) {
        if (uVar6 == 0) {
          puVar9 = (ulong *)(param_1 + 0x88);
          puVar2 = (ulong *)(param_1 + 0x80);
          if (*puVar9 == 0) goto LAB_01316770;
        }
        if ((*puVar3 == 0) && (puVar9 = (ulong *)(param_1 + 0xa0), *puVar9 == 0)) {
          puVar2 = puVar3;
        }
        else if ((*puVar4 == 0) && (puVar9 = (ulong *)(param_1 + 0xb8), *puVar9 == 0)) {
          puVar2 = puVar4;
        }
        else if ((*puVar5 == 0) && (puVar9 = (ulong *)(param_1 + 0xd0), *puVar9 == 0)) {
          puVar2 = puVar5;
        }
        else if ((*puVar7 == 0) && (puVar9 = (ulong *)(param_1 + 0xe8), *puVar9 == 0)) {
          puVar2 = puVar7;
        }
        else if ((*puVar8 == 0) && (*(long *)(param_1 + 0x100) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x100);
          puVar2 = puVar8;
        }
        else if ((*(ulong *)(param_1 + 0x110) == 0) && (*(long *)(param_1 + 0x118) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x118);
          puVar2 = (ulong *)(param_1 + 0x110);
        }
        else if ((*(ulong *)(param_1 + 0x128) == 0) && (*(long *)(param_1 + 0x130) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x130);
          puVar2 = (ulong *)(param_1 + 0x128);
        }
        else if ((*(ulong *)(param_1 + 0x140) == 0) && (*(long *)(param_1 + 0x148) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x148);
          puVar2 = (ulong *)(param_1 + 0x140);
        }
        else if ((*(ulong *)(param_1 + 0x158) == 0) && (*(long *)(param_1 + 0x160) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x160);
          puVar2 = (ulong *)(param_1 + 0x158);
        }
        else if ((*(ulong *)(param_1 + 0x170) == 0) && (*(long *)(param_1 + 0x178) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x178);
          puVar2 = (ulong *)(param_1 + 0x170);
        }
        else if ((*(ulong *)(param_1 + 0x188) == 0) && (*(long *)(param_1 + 400) == 0)) {
          puVar9 = (ulong *)(param_1 + 400);
          puVar2 = (ulong *)(param_1 + 0x188);
        }
        else if ((*(ulong *)(param_1 + 0x1a0) == 0) && (*(long *)(param_1 + 0x1a8) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x1a8);
          puVar2 = (ulong *)(param_1 + 0x1a0);
        }
        else if ((*(ulong *)(param_1 + 0x1b8) == 0) && (*(long *)(param_1 + 0x1c0) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x1c0);
          puVar2 = (ulong *)(param_1 + 0x1b8);
        }
        else if ((*(ulong *)(param_1 + 0x1d0) == 0) && (*(long *)(param_1 + 0x1d8) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x1d8);
          puVar2 = (ulong *)(param_1 + 0x1d0);
        }
        else if ((*(ulong *)(param_1 + 0x1e8) == 0) && (*(long *)(param_1 + 0x1f0) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x1f0);
          puVar2 = (ulong *)(param_1 + 0x1e8);
        }
        else if ((*(ulong *)(param_1 + 0x200) == 0) && (*(long *)(param_1 + 0x208) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x208);
          puVar2 = (ulong *)(param_1 + 0x200);
        }
        else if ((*(ulong *)(param_1 + 0x218) == 0) && (*(long *)(param_1 + 0x220) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x220);
          puVar2 = (ulong *)(param_1 + 0x218);
        }
        else if ((*(ulong *)(param_1 + 0x230) == 0) && (*(long *)(param_1 + 0x238) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x238);
          puVar2 = (ulong *)(param_1 + 0x230);
        }
        else if ((*(ulong *)(param_1 + 0x248) == 0) && (*(long *)(param_1 + 0x250) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x250);
          puVar2 = (ulong *)(param_1 + 0x248);
        }
        else if ((*(ulong *)(param_1 + 0x260) == 0) && (*(long *)(param_1 + 0x268) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x268);
          puVar2 = (ulong *)(param_1 + 0x260);
        }
        else if ((*(ulong *)(param_1 + 0x278) == 0) && (*(long *)(param_1 + 0x280) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x280);
          puVar2 = (ulong *)(param_1 + 0x278);
        }
        else if ((*(ulong *)(param_1 + 0x290) == 0) && (*(long *)(param_1 + 0x298) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x298);
          puVar2 = (ulong *)(param_1 + 0x290);
        }
        else if ((*(ulong *)(param_1 + 0x2a8) == 0) && (*(long *)(param_1 + 0x2b0) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x2b0);
          puVar2 = (ulong *)(param_1 + 0x2a8);
        }
        else if ((*(ulong *)(param_1 + 0x2c0) == 0) && (*(long *)(param_1 + 0x2c8) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x2c8);
          puVar2 = (ulong *)(param_1 + 0x2c0);
        }
        else if ((*(ulong *)(param_1 + 0x2d8) == 0) && (*(long *)(param_1 + 0x2e0) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x2e0);
          puVar2 = (ulong *)(param_1 + 0x2d8);
        }
        else if ((*(ulong *)(param_1 + 0x2f0) == 0) && (*(long *)(param_1 + 0x2f8) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x2f8);
          puVar2 = (ulong *)(param_1 + 0x2f0);
        }
        else if ((*(ulong *)(param_1 + 0x308) == 0) && (*(long *)(param_1 + 0x310) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x310);
          puVar2 = (ulong *)(param_1 + 0x308);
        }
        else if ((*(ulong *)(param_1 + 800) == 0) && (*(long *)(param_1 + 0x328) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x328);
          puVar2 = (ulong *)(param_1 + 800);
        }
        else if ((*(ulong *)(param_1 + 0x338) == 0) && (*(long *)(param_1 + 0x340) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x340);
          puVar2 = (ulong *)(param_1 + 0x338);
        }
        else if ((*(ulong *)(param_1 + 0x350) == 0) && (*(long *)(param_1 + 0x358) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x358);
          puVar2 = (ulong *)(param_1 + 0x350);
        }
        else if ((*(ulong *)(param_1 + 0x368) == 0) && (*(long *)(param_1 + 0x370) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x370);
          puVar2 = (ulong *)(param_1 + 0x368);
        }
        else if ((*(ulong *)(param_1 + 0x380) == 0) && (*(long *)(param_1 + 0x388) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x388);
          puVar2 = (ulong *)(param_1 + 0x380);
        }
        else if ((*(ulong *)(param_1 + 0x398) == 0) && (*(long *)(param_1 + 0x3a0) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x3a0);
          puVar2 = (ulong *)(param_1 + 0x398);
        }
        else if ((*(ulong *)(param_1 + 0x3b0) == 0) && (*(long *)(param_1 + 0x3b8) == 0)) {
          puVar9 = (ulong *)(param_1 + 0x3b8);
          puVar2 = (ulong *)(param_1 + 0x3b0);
        }
        else {
          if (*(ulong *)(param_1 + 0x3c8) != 0) {
            return;
          }
          if (*(long *)(param_1 + 0x3d0) != 0) {
            return;
          }
          puVar9 = (ulong *)(param_1 + 0x3d0);
          puVar2 = puVar10;
        }
LAB_01316770:
        *puVar2 = param_2;
        *puVar9 = param_3;
        return;
      }
    }
    puVar3 = puVar10;
  }
LAB_013165c4:
  *(undefined1 *)(puVar3 + 2) = 1;
  return;
}


