/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e55990; name: FUN_00e55990
 */


void FUN_00e55990(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(param_1 + 0x6a0);
  plVar1 = (long *)(param_1 + 0x600);
  if (lVar2 == -0x340d631b7bddd9bb) {
LAB_00e55a80:
    lVar2 = *(long *)(param_1 + 0x6a8);
    if (lVar2 == -0x340d631b7bddd9bb) goto LAB_00e55b5c;
LAB_00e55a8c:
    plVar3 = plVar1;
    if (*plVar1 == lVar2) {
LAB_00e55b4c:
      *(char *)(plVar3 + 1) = (char)plVar3[1] + '\x01';
      *(undefined8 *)(param_1 + 0x6a8) = 0xcbf29ce484222645;
      goto LAB_00e55b5c;
    }
    if (*(long *)(param_1 + 0x610) == lVar2) {
      plVar3 = (long *)(param_1 + 0x610);
      goto LAB_00e55b4c;
    }
    if (*(long *)(param_1 + 0x620) == lVar2) {
      plVar3 = (long *)(param_1 + 0x620);
      goto LAB_00e55b4c;
    }
    if (*(long *)(param_1 + 0x630) == lVar2) {
      plVar3 = (long *)(param_1 + 0x630);
      goto LAB_00e55b4c;
    }
    if (*(long *)(param_1 + 0x640) == lVar2) {
      plVar3 = (long *)(param_1 + 0x640);
      goto LAB_00e55b4c;
    }
    if (*(long *)(param_1 + 0x650) == lVar2) {
      plVar3 = (long *)(param_1 + 0x650);
      goto LAB_00e55b4c;
    }
    if (*(long *)(param_1 + 0x660) == lVar2) {
      plVar3 = (long *)(param_1 + 0x660);
      goto LAB_00e55b4c;
    }
    if (*(long *)(param_1 + 0x670) == lVar2) {
      plVar3 = (long *)(param_1 + 0x670);
      goto LAB_00e55b4c;
    }
    if (*(long *)(param_1 + 0x680) == lVar2) {
      plVar3 = (long *)(param_1 + 0x680);
      goto LAB_00e55b4c;
    }
    if (*(long *)(param_1 + 0x690) == lVar2) {
      plVar3 = (long *)(param_1 + 0x690);
      goto LAB_00e55b4c;
    }
    if (*plVar1 != -0x340d631b7bddd9bb) {
      if (*(long *)(param_1 + 0x610) == -0x340d631b7bddd9bb) {
        plVar3 = (long *)(param_1 + 0x610);
      }
      else if (*(long *)(param_1 + 0x620) == -0x340d631b7bddd9bb) {
        plVar3 = (long *)(param_1 + 0x620);
      }
      else if (*(long *)(param_1 + 0x630) == -0x340d631b7bddd9bb) {
        plVar3 = (long *)(param_1 + 0x630);
      }
      else if (*(long *)(param_1 + 0x640) == -0x340d631b7bddd9bb) {
        plVar3 = (long *)(param_1 + 0x640);
      }
      else if (*(long *)(param_1 + 0x650) == -0x340d631b7bddd9bb) {
        plVar3 = (long *)(param_1 + 0x650);
      }
      else if (*(long *)(param_1 + 0x660) == -0x340d631b7bddd9bb) {
        plVar3 = (long *)(param_1 + 0x660);
      }
      else if (*(long *)(param_1 + 0x670) == -0x340d631b7bddd9bb) {
        plVar3 = (long *)(param_1 + 0x670);
      }
      else if (*(long *)(param_1 + 0x680) == -0x340d631b7bddd9bb) {
        plVar3 = (long *)(param_1 + 0x680);
      }
      else {
        if (*(long *)(param_1 + 0x690) != -0x340d631b7bddd9bb) goto LAB_00e55b5c;
        plVar3 = (long *)(param_1 + 0x690);
      }
    }
    *plVar3 = lVar2;
    *(char *)(plVar3 + 1) = (char)plVar3[1] + '\x01';
    lVar2 = *(long *)(param_1 + 0x6b0);
  }
  else {
    plVar3 = plVar1;
    if (*plVar1 == lVar2) {
LAB_00e55a70:
      *(char *)(plVar3 + 1) = (char)plVar3[1] + '\x01';
      *(undefined8 *)(param_1 + 0x6a0) = 0xcbf29ce484222645;
      goto LAB_00e55a80;
    }
    if (*(long *)(param_1 + 0x610) == lVar2) {
      plVar3 = (long *)(param_1 + 0x610);
      goto LAB_00e55a70;
    }
    if (*(long *)(param_1 + 0x620) == lVar2) {
      plVar3 = (long *)(param_1 + 0x620);
      goto LAB_00e55a70;
    }
    if (*(long *)(param_1 + 0x630) == lVar2) {
      plVar3 = (long *)(param_1 + 0x630);
      goto LAB_00e55a70;
    }
    if (*(long *)(param_1 + 0x640) == lVar2) {
      plVar3 = (long *)(param_1 + 0x640);
      goto LAB_00e55a70;
    }
    if (*(long *)(param_1 + 0x650) == lVar2) {
      plVar3 = (long *)(param_1 + 0x650);
      goto LAB_00e55a70;
    }
    if (*(long *)(param_1 + 0x660) == lVar2) {
      plVar3 = (long *)(param_1 + 0x660);
      goto LAB_00e55a70;
    }
    if (*(long *)(param_1 + 0x670) == lVar2) {
      plVar3 = (long *)(param_1 + 0x670);
      goto LAB_00e55a70;
    }
    if (*(long *)(param_1 + 0x680) == lVar2) {
      plVar3 = (long *)(param_1 + 0x680);
      goto LAB_00e55a70;
    }
    if (*(long *)(param_1 + 0x690) == lVar2) {
      plVar3 = (long *)(param_1 + 0x690);
      goto LAB_00e55a70;
    }
    if (*plVar1 != -0x340d631b7bddd9bb) {
      if (*(long *)(param_1 + 0x610) == -0x340d631b7bddd9bb) {
        plVar3 = (long *)(param_1 + 0x610);
      }
      else if (*(long *)(param_1 + 0x620) == -0x340d631b7bddd9bb) {
        plVar3 = (long *)(param_1 + 0x620);
      }
      else if (*(long *)(param_1 + 0x630) == -0x340d631b7bddd9bb) {
        plVar3 = (long *)(param_1 + 0x630);
      }
      else if (*(long *)(param_1 + 0x640) == -0x340d631b7bddd9bb) {
        plVar3 = (long *)(param_1 + 0x640);
      }
      else if (*(long *)(param_1 + 0x650) == -0x340d631b7bddd9bb) {
        plVar3 = (long *)(param_1 + 0x650);
      }
      else if (*(long *)(param_1 + 0x660) == -0x340d631b7bddd9bb) {
        plVar3 = (long *)(param_1 + 0x660);
      }
      else if (*(long *)(param_1 + 0x670) == -0x340d631b7bddd9bb) {
        plVar3 = (long *)(param_1 + 0x670);
      }
      else if (*(long *)(param_1 + 0x680) == -0x340d631b7bddd9bb) {
        plVar3 = (long *)(param_1 + 0x680);
      }
      else {
        if (*(long *)(param_1 + 0x690) != -0x340d631b7bddd9bb) goto LAB_00e55a80;
        plVar3 = (long *)(param_1 + 0x690);
      }
    }
    *plVar3 = lVar2;
    *(char *)(plVar3 + 1) = (char)plVar3[1] + '\x01';
    lVar2 = *(long *)(param_1 + 0x6a8);
    if (lVar2 != -0x340d631b7bddd9bb) goto LAB_00e55a8c;
LAB_00e55b5c:
    lVar2 = *(long *)(param_1 + 0x6b0);
  }
  if (lVar2 != -0x340d631b7bddd9bb) {
    if (*plVar1 != lVar2) {
      if (*(long *)(param_1 + 0x610) == lVar2) {
        plVar1 = (long *)(param_1 + 0x610);
      }
      else if (*(long *)(param_1 + 0x620) == lVar2) {
        plVar1 = (long *)(param_1 + 0x620);
      }
      else if (*(long *)(param_1 + 0x630) == lVar2) {
        plVar1 = (long *)(param_1 + 0x630);
      }
      else if (*(long *)(param_1 + 0x640) == lVar2) {
        plVar1 = (long *)(param_1 + 0x640);
      }
      else if (*(long *)(param_1 + 0x650) == lVar2) {
        plVar1 = (long *)(param_1 + 0x650);
      }
      else if (*(long *)(param_1 + 0x660) == lVar2) {
        plVar1 = (long *)(param_1 + 0x660);
      }
      else if (*(long *)(param_1 + 0x670) == lVar2) {
        plVar1 = (long *)(param_1 + 0x670);
      }
      else if (*(long *)(param_1 + 0x680) == lVar2) {
        plVar1 = (long *)(param_1 + 0x680);
      }
      else {
        if (*(long *)(param_1 + 0x690) != lVar2) {
          if (*plVar1 != -0x340d631b7bddd9bb) {
            if (*(long *)(param_1 + 0x610) == -0x340d631b7bddd9bb) {
              plVar1 = (long *)(param_1 + 0x610);
            }
            else if (*(long *)(param_1 + 0x620) == -0x340d631b7bddd9bb) {
              plVar1 = (long *)(param_1 + 0x620);
            }
            else if (*(long *)(param_1 + 0x630) == -0x340d631b7bddd9bb) {
              plVar1 = (long *)(param_1 + 0x630);
            }
            else if (*(long *)(param_1 + 0x640) == -0x340d631b7bddd9bb) {
              plVar1 = (long *)(param_1 + 0x640);
            }
            else if (*(long *)(param_1 + 0x650) == -0x340d631b7bddd9bb) {
              plVar1 = (long *)(param_1 + 0x650);
            }
            else if (*(long *)(param_1 + 0x660) == -0x340d631b7bddd9bb) {
              plVar1 = (long *)(param_1 + 0x660);
            }
            else if (*(long *)(param_1 + 0x670) == -0x340d631b7bddd9bb) {
              plVar1 = (long *)(param_1 + 0x670);
            }
            else if (*(long *)(param_1 + 0x680) == -0x340d631b7bddd9bb) {
              plVar1 = (long *)(param_1 + 0x680);
            }
            else {
              if (*(long *)(param_1 + 0x690) != -0x340d631b7bddd9bb) goto LAB_00e55c34;
              plVar1 = (long *)(param_1 + 0x690);
            }
          }
          *plVar1 = lVar2;
          *(char *)(plVar1 + 1) = (char)plVar1[1] + '\x01';
          *(undefined8 *)(param_1 + 0x6a0) = 0xcbf29ce484222645;
          *(undefined8 *)(param_1 + 0x6a8) = 0xcbf29ce484222645;
          *(undefined8 *)(param_1 + 0x6b0) = 0xcbf29ce484222645;
          return;
        }
        plVar1 = (long *)(param_1 + 0x690);
      }
    }
    *(char *)(plVar1 + 1) = (char)plVar1[1] + '\x01';
    *(undefined8 *)(param_1 + 0x6b0) = 0xcbf29ce484222645;
  }
LAB_00e55c34:
  *(undefined8 *)(param_1 + 0x6a0) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x6a8) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x6b0) = 0xcbf29ce484222645;
  return;
}


